#include <dummy.h>

#include <SPI.h>
#include <LoRa.h>
#include <WiFi.h>
#include <DNSServer.h>
#include <SSD1306Wire.h>

#include "ctjb.h"
#include "icons.h"

// https://user-images.githubusercontent.com/460731/35782958-a02ac15c-0a00-11e8-8d74-31f7928b509f.jpg

#define PIN_OLED_SDA 21
#define PIN_OLED_SCL 22
#define PIN_LORA_MISO 19
#define PIN_LORA_DIO0 26
#define PIN_LORA_CS 18
#define PIN_LORA_SCK 5
#define PIN_LORA_MOSI 27
#define PIN_LORA_RST 12
#define LORA_FREQ 868000000

const byte DNS_PORT = 53;
IPAddress apIP(192, 168, 1, 1);
DNSServer dnsServer;
WiFiServer server(80);
byte curSsid = 0;
byte rickRolling = 3;
unsigned long lastWifiChange = 0;
String header;
const char* password = "osada1234";
const char* ssidT = "Tyrsak2";
const char* ssids[] = {
  "Never gonna give you up",
  "Never gonna let you down",
  "Never gonna run around and desert you",
  "Never gonna make you cry",
  "Never gonna say goodbye",
  "Never gonna tell a lie and hurt you"
};

#define NSSIDS() (sizeof(ssids)/sizeof(ssids[0]))

uint64_t chipid;

SSD1306Wire display(0x3C, PIN_OLED_SDA, PIN_OLED_SCL);

void setup()
{
  chipid = 0;//ESP.getEfuseMac();
  Serial.begin(115200);
  Serial.println("Initializing LoRa");
  SPI.begin(PIN_LORA_SCK, PIN_LORA_MISO, PIN_LORA_MOSI, PIN_LORA_CS);
  LoRa.setPins(PIN_LORA_CS, PIN_LORA_RST, PIN_LORA_DIO0);
  while (!LoRa.begin(LORA_FREQ)) {
    Serial.println(".");
    delay(500);
  }
  Serial.println("DONE");

  display.init();

  displayCTJB();
  delay(1000);
  displayAnimal();
  //sendAnimal();

  Serial.println("Switching to receive");
}

void displayCTJB()
{
  display.clear();
  display.drawXbm(0, 16, ctjb_width, ctjb_height, ctjb_bits);
  display.display();
}

void displayAnimal()
{
  int index = chipid % ICONS_COUNT;
  const uint8_t *data = (const uint8_t *)icons[index];

  display.clear();
  display.drawXbm(32, 0, 64, 64, data);
  display.display();
}

#define PAYLOAD_SIZE 512
#define PACKET_SIZE 64
#define PAYLOAD_CHUNKS (PAYLOAD_SIZE / PACKET_SIZE)

void sendAnimal()
{
  int index = chipid % ICONS_COUNT;
  const uint8_t *data = (const uint8_t *)icons[index];

  //Serial.println("Sending animal");
  for (byte i = 0; i < PAYLOAD_CHUNKS; i++) {
    LoRa.beginPacket();
    LoRa.write((const uint8_t *)"CTJB", 4);
    LoRa.write(i);
    LoRa.write(data + i * PACKET_SIZE, PACKET_SIZE);
    LoRa.endPacket();
    Serial.println(i);
    delay(100);
  }
  //Serial.println("DONE");
}

void onReceive(int packetSize)
{
  uint8_t payload[PACKET_SIZE] = {0};

  Serial.print("Received packet of size ");
  Serial.print(packetSize);
  Serial.print(", RSSI: ");
  Serial.println(LoRa.packetRssi());

  if (packetSize != 4 + 1 + PACKET_SIZE) {
    Serial.println("Invalid packet size");
    return;
  }
  byte hdr[4];
  for (int i = 0; i < 4; i++) {
    hdr[i] = LoRa.read();
  }
  if (memcmp(hdr, "CTJB", 4) != 0) {
    Serial.println("Invalid header");
    return;
  }
  byte o = LoRa.read();
  if (o >= PAYLOAD_CHUNKS) {
    Serial.println("Invalid chunk id");
    return;
  }
  for (int i = 0; i < PACKET_SIZE; i++) {
    payload[i] = LoRa.read();
  }
  //Serial.print("Data received, chunk ");
  //Serial.println(o);
  //Serial.println();

  // display the data
  display.setColor(BLACK);
  display.fillRect(32, o * 8, 64, 8);
  display.setColor(WHITE);
  display.drawXbm(32, o * 8, 64, 8, payload);
  display.display();
}

void loop()
{
  char inData[66];
  uint8_t payload[PACKET_SIZE] = {0};

  // Pic receiver 
  int packetSize = LoRa.parsePacket();
  if (packetSize) {
    onReceive(packetSize);
  }

  // Serial listener
  int serAvail = Serial.available();
  if (serAvail>0){
    byte recv = Serial.readBytes(inData, 65);
    if (recv!=65){
      if (memcmp(inData, "!RR0", 4)==0){
        rickRolling = 0;
      } else if (memcmp(inData, "!RR1", 4)==0){
        rickRolling = 1;
      }
      
    } else {  // Serial -> Screen forwarder 
        byte o = inData[0];
        for (int i = 0; i < PACKET_SIZE; i++) {
          payload[i] = inData[1+i];
        }
      
        // display the data
        display.setColor(BLACK);
        display.fillRect(32, o * 8, 64, 8);
        display.setColor(WHITE);
        display.drawXbm(32, o * 8, 64, 8, payload);
        display.display();

        // TX pic packet
        LoRa.beginPacket();
        LoRa.write((const uint8_t *)"CTJB", 4);
        LoRa.write((const uint8_t *)inData, recv);
        LoRa.endPacket();
    }
  }

  // Rickroll
  // WiFi https://www.arduino.cc/reference/en/language/functions/time/millis/ 
  if (rickRolling == 0 && millis() - lastWifiChange > 5000){
    WiFi.softAP(ssids[curSsid], password);
    curSsid = (curSsid + 1) % NSSIDS();
    lastWifiChange = millis();
  } else if (rickRolling == 1 && lastWifiChange == 0){
    WiFi.softAPConfig(apIP, apIP, IPAddress(255, 255, 255, 0));
    WiFi.softAP(ssidT, password);
    server.begin();
    dnsServer.setTTL(300);
    dnsServer.setErrorReplyCode(DNSReplyCode::ServerFailure);
    lastWifiChange = millis();
    Serial.println("Booted rickroll"); 
  }

  // Handle victim 
  if (rickRolling == 1 && millis() - lastWifiChange > 2000){
    WiFiClient client = server.available();
    if (client) {                             // If a new client connects,
      Serial.println("New Client.");          // print a message out in the serial port
      String currentLine = "";                // make a String to hold incoming data from the client
      while (client.connected()) {            // loop while the client's connected
        if (client.available()) {             // if there's bytes to read from the client,
          char c = client.read();             // read a byte, then
          Serial.write(c);                    // print it out the serial monitor
          header += c;
          if (c == '\n') {                    // if the byte is a newline character
            // if the current line is blank, you got two newline characters in a row.
            // that's the end of the client HTTP request, so send a response:
            if (currentLine.length() == 0) {
              // HTTP headers always start with a response code (e.g. HTTP/1.1 200 OK)
              // and a content-type so the client knows what's coming, then a blank line:
              client.println("HTTP/1.1 302 Found");
              client.println("Location: https://www.youtube.com/watch?v=oHg5SJYRHA0");
              client.println();
              client.println();
              // Break out of the while loop
              break;
            } else { // if you got a newline, then clear currentLine
              currentLine = "";
            }
          } else if (c != '\r') {  // if you got anything else but a carriage return character,
            currentLine += c;      // add it to the end of the currentLine
          }
        }
      }
      // Clear the header variable
      header = "";
      // Close the connection
      client.stop();
      Serial.println("Client disconnected.");
    }
  }
  
}
