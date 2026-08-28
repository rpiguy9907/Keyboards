#pragma once


#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xDEE7
#define PRODUCT_ID      0x0162
#define DEVICE_VER      0x0001
#define MANUFACTURER    kelvinh_27
#define PRODUCT         SP66
#define DESCRIPTION     Southpaw66 Keyboard

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

/* key matrix pins */
#define MATRIX_ROW_PINS { E6, B5, F7, B3, F4, F6, B1, B2, F5, B4 }
#define MATRIX_COL_PINS { D7, C6, D4, D0, D1, D2, D3 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION ROW2COL

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
