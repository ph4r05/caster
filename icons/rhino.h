#define rhino_width 64
#define rhino_height 64
static char rhino_bits[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xC0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xF8, 0x3F, 0x00, 0x00, 0x00, 0xE0, 0x07, 0x00, 0xFC, 0x7F, 0x00, 0x00, 
  0x00, 0xFC, 0xFF, 0x45, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x00, 
  0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x61, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x7B, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 
  0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2F, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x0F, 0x80, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xC0, 
  0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xC0, 0xE0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x3F, 0xC0, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xE0, 
  0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE8, 0xE0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x7F, 0x90, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 
  0x18, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x0C, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x7F, 0x04, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 
  0x03, 0xFC, 0xFF, 0x83, 0xFF, 0x8F, 0xFF, 0x3F, 0x00, 0xFC, 0xFF, 0x81, 
  0xFF, 0x1F, 0xF0, 0x3F, 0x00, 0xFE, 0xFF, 0x01, 0xFF, 0x3F, 0x80, 0x1F, 
  0x00, 0xFE, 0xFE, 0x00, 0xFF, 0x3F, 0x00, 0x0F, 0x00, 0x7E, 0xFC, 0x01, 
  0x7F, 0x7F, 0x00, 0x00, 0x00, 0x7E, 0xF8, 0x01, 0x7E, 0x7E, 0x00, 0x00, 
  0x00, 0xFE, 0xF0, 0x01, 0x7E, 0xFE, 0x00, 0x00, 0x00, 0xFC, 0xF0, 0x03, 
  0xFE, 0xFC, 0x01, 0x00, 0x00, 0xFC, 0xF3, 0x0F, 0xFE, 0xF9, 0x07, 0x00, 
  0x00, 0xFE, 0xFF, 0x1F, 0xFF, 0xFB, 0x0F, 0x00, 0x00, 0x98, 0x51, 0x09, 
  0x54, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
