#include <TFT_eSPI.h>
#include <SPI.h>
#include "spersamearga.h"  // updated header file name

TFT_eSPI tft = TFT_eSPI();

void setup() {
  Serial.begin(115200);
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);

  tft.setSwapBytes(true);  // For little-endian RGB565 data

  // Cast image data to uint16_t* since it's stored as a uint8_t[] (2 bytes per pixel)
  tft.pushImage(0, 0, PixelmareImage_WIDTH, PixelmareImage_HEIGHT, (uint16_t*)PixelmareImage);
}

void loop() {}