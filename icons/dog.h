#define dog_width 64
#define dog_height 64
static char dog_bits[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x03, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0xF8, 0xFF, 0xFF, 0x02, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 
  0x0E, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x7F, 0x3C, 0x00, 0x00, 0x00, 
  0x00, 0xFF, 0xFF, 0x3F, 0x7C, 0x00, 0x80, 0x42, 0xE4, 0xFF, 0xFF, 0x3F, 
  0xF8, 0x01, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x0D, 0xF0, 0x8F, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 
  0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x1F, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x07, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 
  0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x01, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 
  0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x3F, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 
  0xC0, 0xFF, 0xFF, 0xD7, 0xFD, 0x1F, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x00, 
  0xF8, 0x1F, 0x00, 0x00, 0xE0, 0x7F, 0x7E, 0x00, 0xF8, 0x1F, 0x00, 0x00, 
  0xE0, 0x3F, 0x7E, 0x00, 0xFC, 0x3F, 0x00, 0x00, 0xE0, 0x1F, 0x3F, 0x00, 
  0xFC, 0x3F, 0x00, 0x00, 0xF0, 0x0F, 0x3F, 0x00, 0xFC, 0x3F, 0x00, 0x00, 
  0xF0, 0x07, 0x3F, 0x00, 0xFE, 0x3F, 0x00, 0x00, 0xE0, 0x03, 0x3F, 0x00, 
  0xFE, 0x7F, 0x00, 0x00, 0xE0, 0x03, 0x3F, 0x00, 0x3E, 0x7F, 0x00, 0x00, 
  0xE0, 0x03, 0x3E, 0x00, 0x3F, 0x7E, 0x00, 0x00, 0xE0, 0x03, 0x7E, 0x00, 
  0x1F, 0x7E, 0x00, 0x00, 0xC0, 0x03, 0x7C, 0x00, 0x0F, 0x7C, 0x00, 0x00, 
  0xC0, 0x07, 0xFC, 0x80, 0x0F, 0xF8, 0x01, 0x00, 0xC0, 0x1F, 0xF8, 0x83, 
  0x3F, 0xF8, 0x07, 0x00, 0xC0, 0x1F, 0xF0, 0x87, 0x7F, 0xF0, 0x07, 0x00, 
  0x80, 0x1F, 0xE0, 0xC3, 0x3F, 0xE0, 0x0F, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
