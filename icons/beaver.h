#define beaver_width 64
#define beaver_height 64
static char beaver_bits[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFA, 0x1F, 0x40, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0xF0, 
  0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0x1F, 
  0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0x1F, 0x30, 0x00, 0x00, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x7F, 0xF8, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFC, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x01, 0xE0, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x03, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0xF8, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 
  0xFF, 0x07, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0xFE, 0x0F, 0xFE, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xC0, 0xFE, 0x0F, 0xFE, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 
  0xFE, 0x1F, 0xFE, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0x1F, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 
  0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x1F, 0x01, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xFE, 0x03, 
  0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFC, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x03, 0x08, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 
  0x00, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 
  0x3F, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 
  0x00, 0x00, 0xFE, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 
  0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
