#define rat_width 64
#define rat_height 64
static char rat_bits[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 0xE0, 0x1F, 0x00, 0xC0, 0x0F, 0x00, 
  0x00, 0x00, 0xF8, 0xFF, 0x00, 0xC0, 0x1F, 0x00, 0x00, 0x00, 0xFC, 0xFF, 
  0x07, 0x85, 0x1F, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 
  0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x80, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 
  0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0xE0, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0xF0, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xF8, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xDF, 0xFF, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 
  0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0xAF, 0x7F, 0x00, 0x00, 
  0x00, 0xFF, 0xFF, 0xFF, 0x03, 0x7F, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 
  0x03, 0x3C, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0x01, 0x78, 0x00, 0x00, 
  0xF0, 0xFF, 0xFF, 0xFF, 0x00, 0x78, 0x00, 0x00, 0xF8, 0xF1, 0xFF, 0x3F, 
  0x00, 0x70, 0x00, 0x00, 0x7C, 0xC0, 0xFF, 0x1F, 0x00, 0xE0, 0x00, 0x00, 
  0x0E, 0x00, 0xF8, 0xFF, 0x01, 0xE0, 0x01, 0x00, 0x06, 0x00, 0xFC, 0xFF, 
  0x03, 0xC0, 0x0F, 0x00, 0x07, 0x00, 0xF8, 0xFF, 0x01, 0x80, 0x05, 0x00, 
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xF8, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x65, 0xFD, 
  0x0F, 0x00, 0x00, 0x00, 0x00, 0xA4, 0xFF, 0x1B, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
