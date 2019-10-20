#include QMK_KEYBOARD_H

#include "zilliq.h"

// Tap Dance Declarations
// enum { ENT_5 = 0, ZERO_7 };

// Macro Declarations
// enum { DBL_0 = 0 };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* LAYER 0
     * ,-----------------------.
     * |   1   |   2   |   3   |
     * `-----------------------'
     */
    [0] = LAYOUT(RGB_MODE_RAINBOW, RGB_TOG, RGB_MODE_XMAS),
};

void matrix_init_user(void){
    //rgblight_sethsv_at(0xFF, 0x00, 0x00, 0);
    rgblight_set_blue;
    // rgblight_sethsv(0xFF, 0xFF, 0xEE);
}
