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
    [0] = LAYOUT(MO(1), MO(2), MO(3)),
    [1] = LAYOUT(RGBLIGHT_MODE_STATIC_LIGHT, RGBLIGHT_MODE_RGB_TEST, RGBLIGHT_MODE_KNIGHT),
    [2] = LAYOUT(RGBLIGHT_MODE_STATIC_LIGHT, RGBLIGHT_MODE_RGB_TEST, RGBLIGHT_MODE_KNIGHT),
    [3] = LAYOUT(RGBLIGHT_MODE_STATIC_LIGHT, RGBLIGHT_MODE_RGB_TEST, RGBLIGHT_MODE_KNIGHT),
};

uint8_t prev = 0;

void matrix_init_user(void){
    rgblight_mode(9);
}

uint32_t layer_state_set_user(uint32_t state) {
    uint8_t layer = biton32(state);
    if (prev == 0) {
        switch (layer) {
            case 0:
                rgblight_mode(RGBLIGHT_MODE_RGB_TEST);
                break;

            case 1:
                rgblight_mode(RGBLIGHT_MODE_KNIGHT);
                break;

            case 2:
                rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
                break;

            case 3:
                rgblight_setrgb_at(0, 0, 255, 0);
                rgblight_setrgb_at(255, 255, 255, 1);
                rgblight_setrgb_at(255, 0, 0x00, 2);
                break;
        }
    }
    prev = layer;
    return state;
}
