#pragma once
#include <Arduino_GFX_Library.h>

// display information
#define TFT_WIDTH 240
#define TFT_HEIGHT 320
#define TFT_ORIENTATION 0

// setup XPT2046_Touchscreen
#define XPT2046_IRQ 36
#define XPT2046_MOSI 32
#define XPT2046_MISO 39
#define XPT2046_CLK 25
#define XPT2046_CS 33

// calibration of touch screen
#define TOUCH_SCREEN_MIN_X 370
#define TOUCH_SCREEN_MAX_X 3750
#define TOUCH_SCREEN_MIN_Y 525
#define TOUCH_SCREEN_MAX_Y 3500

// initiate Arduino_GFX
#define GFX_BL 21

static Arduino_ESP32SPI bus{
  2 /* DC */,
  15 /* CS */,
  14 /* SCK */,
  13 /* MOSI */,
  12 /* MISO */
};
static Arduino_ILI9341 display{
  &bus,
  GFX_NOT_DEFINED /* RST */,
  TFT_ORIENTATION /* rotation */
};
