#define owl_width 64
#define owl_height 64
static char owl_bits[] = {
  0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
  0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x80, 0x01, 
  0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xFC, 
  0xF4, 0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x3F, 0x00, 
  0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0xF0, 
  0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x3F, 0x00, 
  0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xF0, 
  0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x3F, 0x00, 
  0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xFC, 
  0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x7F, 0x00, 
  0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xFC, 
  0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x7F, 0x00, 
  0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xF0, 
  0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x1F, 0x00, 
  0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xFC, 
  0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 
  0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0xC0, 0xFF, 
  0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 
  0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xF8, 0xFF, 
  0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 
  0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xFE, 0xFF, 
  0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 
  0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 
  0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x3F, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 
  0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x1F, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 
  0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x0F, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 
  0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x03, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 
  0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 
  0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 
  0xFF, 0x1F, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 
  0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 
  0xFF, 0x01, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 
  0x80, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 
  0x03, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x60, 0x1A, 0x00, 0x00, 0x00, 0x00, 
  0xC0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x0F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
