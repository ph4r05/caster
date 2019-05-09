#define gecko_width 64
#define gecko_height 64
static char gecko_bits[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xA0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0xFE, 
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC1, 0xFF, 0xFF, 0x07, 0x00, 0x00, 
  0x00, 0xC0, 0xF3, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0xC0, 0xFB, 0xFF, 
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0xC0, 0xF7, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 
  0x00, 0xE0, 0xF7, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0xE0, 0xEF, 0xFF, 
  0xFF, 0xFF, 0x0F, 0x00, 0x00, 0xE0, 0xEF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 
  0x00, 0xF0, 0xEF, 0xFF, 0xFF, 0xAF, 0x3F, 0x00, 0x00, 0xF0, 0xDF, 0xFF, 
  0xFF, 0x73, 0x7F, 0x00, 0x00, 0xF8, 0xDF, 0xFF, 0xFF, 0xFB, 0xFE, 0x00, 
  0x00, 0xF8, 0xDF, 0xFF, 0xFF, 0xFD, 0xFE, 0x01, 0x00, 0xFC, 0xBF, 0xFF, 
  0xFF, 0xFE, 0xFF, 0x03, 0x00, 0xFC, 0xBF, 0xFF, 0xFF, 0x7E, 0xFE, 0x03, 
  0x00, 0xFE, 0xBF, 0xC3, 0xFF, 0x3F, 0xFF, 0x07, 0x00, 0xFF, 0x7F, 0x7B, 
  0xFF, 0xDE, 0xFF, 0x0F, 0x00, 0xFF, 0xBF, 0xFD, 0xFF, 0xEF, 0xFF, 0x0F, 
  0x80, 0xFF, 0x7F, 0x7E, 0xFF, 0xFE, 0xFF, 0x1F, 0xC0, 0xFF, 0x7F, 0x7E, 
  0xFF, 0x1E, 0xFE, 0x1F, 0xE0, 0xFF, 0x7F, 0xBF, 0x1F, 0x1C, 0xF0, 0x3F, 
  0xF0, 0xFF, 0x7F, 0xDF, 0x0F, 0x3F, 0xC0, 0x3F, 0xF8, 0xFF, 0x7F, 0xEE, 
  0xC3, 0x1F, 0x80, 0x7F, 0xFE, 0xFF, 0x7F, 0xFF, 0xE0, 0x01, 0x00, 0x7F, 
  0xFF, 0xFF, 0x7F, 0x0E, 0x70, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0x3F, 0x1E, 
  0x38, 0x20, 0x00, 0xFE, 0xFE, 0xFF, 0x1F, 0x3C, 0x38, 0xFC, 0x03, 0xFC, 
  0xFC, 0xFF, 0x0F, 0x3E, 0x00, 0xFE, 0x07, 0xFC, 0xC0, 0xFF, 0x83, 0x1F, 
  0x80, 0x07, 0x0F, 0xFC, 0x00, 0x18, 0x80, 0x03, 0x80, 0x01, 0x1C, 0xF8, 
  0x00, 0x00, 0xC0, 0x01, 0xC0, 0x01, 0x18, 0xF8, 0x00, 0x00, 0xE0, 0x00, 
  0xC0, 0x00, 0x18, 0xF8, 0x00, 0x00, 0x60, 0x00, 0xE0, 0x00, 0x38, 0xF8, 
  0x00, 0x00, 0x60, 0x00, 0xE0, 0x00, 0x38, 0xF8, 0x00, 0x00, 0x00, 0x00, 
  0x60, 0x00, 0x18, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x1C, 0x78, 
  0x00, 0x00, 0x00, 0x00, 0xE0, 0x30, 0x0E, 0x7C, 0x00, 0x00, 0x00, 0x00, 
  0xE0, 0xF0, 0x07, 0x3C, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x03, 0x3E, 
  0x00, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 
  0x80, 0x03, 0x80, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0xE0, 0x07, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x03, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xFC, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x3F, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
