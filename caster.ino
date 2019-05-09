#include <dummy.h>

#include <SPI.h>
#include <LoRa.h>
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

  //Serial.print("Received packet of size ");
  //Serial.println(packetSize);
  //Serial.print("RSSI: ");
  //Serial.println(LoRa.packetRssi());

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
  char inData[120];
  uint8_t payload[PACKET_SIZE] = {0};

  if (LoRa.available()){
    int packetSize = LoRa.parsePacket();
    if (packetSize) {
      onReceive(packetSize);
    }
  }

  if (Serial.available()>=65){
  byte recv = Serial.readBytes(inData, 65);
  if (recv>0){
      LoRa.beginPacket();
      LoRa.write((const uint8_t *)"CTJB", 4);
      LoRa.write((const uint8_t *)inData, recv);
      LoRa.endPacket();
      Serial.println(recv);
      
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
  }
  }
  
}
