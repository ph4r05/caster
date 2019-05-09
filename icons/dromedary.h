#define dromedary_width 64
#define dromedary_height 64
static char dromedary_bits[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x07, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xFE, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x7F, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x30, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0x1F, 0x00, 
  0x00, 0x00, 0xF0, 0x0F, 0x00, 0x80, 0x1F, 0x00, 0x00, 0x00, 0xFC, 0x3F, 
  0x00, 0x80, 0x1F, 0x00, 0x00, 0x00, 0xFE, 0x7F, 0x00, 0x80, 0x1F, 0x00, 
  0x00, 0x80, 0xFF, 0xFF, 0x01, 0xC0, 0x0F, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 
  0x1F, 0xC0, 0x0F, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0x7F, 0xC0, 0x0F, 0x00, 
  0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x07, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xF1, 0x07, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 0x07, 0x00, 
  0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x03, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 
  0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x01, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 
  0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0xF6, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x3F, 0x00, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 
  0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x0F, 0x00, 0x00, 0xF3, 0xDF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 
  0xF2, 0x0F, 0xFE, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0xF9, 0x0F, 0xFC, 0xFF, 
  0xFF, 0x01, 0x00, 0x00, 0xFA, 0x0F, 0xE0, 0xFF, 0xFF, 0x00, 0x00, 0x00, 
  0xFA, 0x07, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFC, 0x07, 0x00, 0x00, 
  0x7F, 0x00, 0x00, 0x00, 0xFC, 0x03, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 
  0xFE, 0x01, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 
  0x3E, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 
  0x3E, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 
  0x3E, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 
  0x1E, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 
  0x3E, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 
  0x1C, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 
  0x1F, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 
  0x78, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 
  0x0E, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 
  0x70, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 
  0x0E, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 
  0xE0, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x00, 0x00, 
  0x1E, 0x00, 0x00, 0x00, 0xE0, 0x03, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 
  0xC0, 0x03, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0xC0, 0x07, 0x00, 0x00, 
  0x3E, 0x00, 0x00, 0x00, 0xC0, 0x1F, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 
  0x80, 0x1F, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, };
