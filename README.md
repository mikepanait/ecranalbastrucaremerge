 #define ST7789_DRIVER
#define TFT_WIDTH  240
#define TFT_HEIGHT 240

#define TFT_SCLK 18
#define TFT_MOSI 23
#define TFT_RST  19
#define TFT_DC   5
#define TFT_CS   -1  // Not used

#define TFT_BL   -1  // Backlight handled internally

#define LOAD_GLCD
#define LOAD_GFXFF

#define SPI_FREQUENCY  27000000
#define SPI_READ_FREQUENCY  20000000

#define TFT_RGB_ORDER TFT_RGB  // For ST7789
#define TFT_INVERSION_ON

#define TFT_DISPLAY_OFFSET_Y 80   // <--- THIS fixes your blank screen!
