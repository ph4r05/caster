#define bull_width 64
#define bull_height 64
static char bull_bits[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0xC5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x7F, 
  0x00, 0xBA, 0x00, 0x00, 0xFE, 0xFF, 0xE1, 0x3F, 0xC0, 0xFF, 0x07, 0xD0, 
  0xFF, 0xFF, 0xFF, 0x01, 0xF0, 0xFF, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
  0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xFC, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x03, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 
  0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFE, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x0F, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xF6, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x1F, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 
  0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xE2, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xE6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 0x7F, 
  0xC2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x7E, 0xC6, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x7F, 0x00, 0x10, 0x86, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 
  0x86, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x86, 0xFF, 0xFD, 0xFF, 
  0xFF, 0x1F, 0x00, 0x00, 0x8F, 0x3F, 0xF0, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 
  0xCF, 0x1F, 0xC0, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0xCF, 0x1F, 0x00, 0xFA, 
  0xFF, 0x07, 0x00, 0x00, 0xEF, 0x0F, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 
  0xE6, 0x07, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xE6, 0x03, 0x00, 0x00, 
  0xF8, 0x00, 0x00, 0x00, 0xC4, 0x01, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 
  0xC0, 0x01, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 
  0xF0, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 
  0xC0, 0x01, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 
  0x70, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 
  0xC0, 0x01, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 
  0x78, 0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 
  0xC0, 0x03, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 
  0xF0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
