#define pig_width 64
#define pig_height 64
static char pig_bits[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0xFE, 
  0x02, 0x00, 0x1F, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x3F, 0x80, 0x0F, 0x00, 
  0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xE0, 0x0F, 0x00, 0x00, 0x00, 0xFE, 0xFF, 
  0xFF, 0xF3, 0x07, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 
  0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x80, 0xC0, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x0F, 0x00, 0xE1, 0xE3, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 
  0x32, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x36, 0xFA, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x7F, 0x00, 0xB8, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
  0xF0, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x60, 0xFC, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x7F, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFE, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xBF, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 
  0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFE, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2F, 
  0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0xFC, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x03, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 
  0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0xF0, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 
  0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x0F, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 
  0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x01, 0x00, 0x00, 0xC0, 0xDF, 0xFF, 0xF7, 0xFF, 0x01, 0x00, 
  0x00, 0x80, 0xDF, 0x0F, 0xE0, 0xFF, 0x01, 0x00, 0x00, 0x80, 0x9F, 0x0F, 
  0xC0, 0xFF, 0x01, 0x00, 0x00, 0x80, 0x9F, 0x0F, 0xC0, 0xFF, 0x01, 0x00, 
  0x00, 0x80, 0x9F, 0x0F, 0xC0, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x1F, 0x00, 
  0x80, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0xC0, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
