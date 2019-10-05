#include "3key.h"

led_config_t g_led_config = {
    {// Key Matrix to LED Index
        {0, 1, 2}
    },
    {// LED Index to Physical Position
        {37, 32},
        {111, 32},
        {185, 32}
     },
    {// LED Index to Flag
        4, 4, 4}
    };

void matrix_init_kb(void) { matrix_init_user(); }
