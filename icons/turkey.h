#define turkey_width 64
#define turkey_height 64
static char turkey_bits[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x06, 0x00, 
  0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0xFE, 0x03, 
  0x00, 0x80, 0x1F, 0x00, 0x00, 0x00, 0xFE, 0x07, 0x00, 0xE0, 0x3F, 0x00, 
  0x00, 0x00, 0xFF, 0x0F, 0x00, 0xF0, 0x7F, 0x00, 0x00, 0x00, 0xFF, 0x3F, 
  0x00, 0xF8, 0x7F, 0x00, 0x00, 0x00, 0xFF, 0x3F, 0x00, 0xF8, 0xFF, 0x00, 
  0x00, 0x00, 0xFF, 0x7F, 0x00, 0xFC, 0xFF, 0x01, 0x00, 0x00, 0xFF, 0x0F, 
  0x00, 0xFD, 0xFF, 0x01, 0x00, 0x00, 0xFE, 0x0F, 0x80, 0xFF, 0xFF, 0x03, 
  0x00, 0x00, 0xFE, 0x07, 0xC0, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0xFE, 0x07, 
  0xE0, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0xFC, 0x07, 0xE0, 0xFF, 0xFF, 0x0F, 
  0x00, 0x00, 0xFC, 0x0F, 0xE0, 0xFF, 0xFF, 0xEF, 0xFF, 0x00, 0xFC, 0x0F, 
  0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0xF8, 0x0F, 0xF0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x0F, 0xF8, 0x0F, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xF8, 0x1F, 
  0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xF0, 0x1F, 0xF0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xF0, 0x1F, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF1, 0x1F, 
  0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 0x1F, 0xFE, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xF7, 0x1F, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFE, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x3F, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xFC, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x3F, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 
  0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xF8, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x3F, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 
  0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xF8, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x3F, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 
  0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xE0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x3F, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 
  0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xC0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x1F, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xE0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x0F, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 
  0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0xC0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x03, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 
  0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x3F, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 
  0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 
  0xFF, 0x47, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0xFC, 0xFF, 0xBF, 0x07, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 
  0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x87, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0xFC, 0xFF, 0x83, 0x03, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 
  0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x3F, 0x80, 0x03, 0x00, 0x00, 
  0x00, 0x00, 0xE6, 0x0F, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x01, 
  0xF0, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x01, 0x00, };
