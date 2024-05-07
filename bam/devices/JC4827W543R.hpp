#pragma once
#include <Arduino_GFX_Library.h>

// display information
#define TFT_WIDTH 480
#define TFT_HEIGHT 272
#define TFT_ORIENTATION 1

// setup XPT2046_Touchscreen
#define XPT2046_IRQ 3
#define XPT2046_MOSI 11
#define XPT2046_MISO 13
#define XPT2046_CLK 12
#define XPT2046_CS 38

// calibration of touch screen
#define TOUCH_SCREEN_MIN_X 3750
#define TOUCH_SCREEN_MAX_X 370
#define TOUCH_SCREEN_MIN_Y 525
#define TOUCH_SCREEN_MAX_Y 3500

// setup Arduino_GFX
#define GFX_BL 1

static Arduino_ESP32QSPI bus{
  45 /* cs */,
  47 /* sck */,
  21 /* d0 */,
  48 /* d1 */,
  40 /* d2 */,
  39 /* d3 */
};
static Arduino_NV3041A display{
  &bus,
  GFX_NOT_DEFINED /* RST */,
  TFT_ORIENTATION,
  true /* IPS */
};
