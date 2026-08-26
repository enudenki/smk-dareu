#include "kbdef.h"
#include "layout.h"
#include "user_layout.h"
#include "report.h"
#include <stdint.h>


const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = {
        // Row 0
        {
            KC_NO,                 // 00x00
            KC_ESC,                // 00x01
            KC_F1,                 // 00x02
            KC_F2,                 // 00x03
            KC_F3,                 // 00x04
            KC_F4,                 // 00x05
            KC_F5,                 // 00x06
            KC_F6,                 // 00x07
            KC_F7,                 // 00x08
            KC_F8,                 // 00x09
            KC_F9,                 // 00x0A
            KC_F10,                // 00x0B
            KC_F11,                // 00x0C
            KC_F12,                // 00x0D
            KC_PSCR,               // 00x0E
            KC_SCRL,               // 00x0F
            KC_PAUS,               // 00x10
            KC_AUDIO_VOL_DOWN,     // 00x11
            KC_MEDIA_SELECT,       // 00x12
            KC_MEDIA_PLAY_PAUSE,   // 00x13
            KC_AUDIO_VOL_UP,       // 00x14
        },

        // Row 1
        {
            KC_GRV,                // 01x00
            KC_1,                  // 01x01
            KC_2,                  // 01x02
            KC_3,                  // 01x03
            KC_4,                  // 01x04
            KC_5,                  // 01x05
            KC_6,                  // 01x06
            KC_7,                  // 01x07
            KC_8,                  // 01x08
            KC_9,                  // 01x09
            KC_0,                  // 01x0A
            KC_MINS,               // 01x0B
            KC_EQL,                // 01x0C
            KC_BSPC,               // 01x0D
            KC_INS,                // 01x0E
            KC_HOME,               // 01x0F
            KC_PGUP,               // 01x10
            KC_NUM,                // 01x11
            KC_PSLS,               // 01x12
            KC_PAST,               // 01x13
            KC_PMNS,               // 01x14
        },

        // Row 2
        {
            KC_TAB,                // 02x00
            KC_Q,                  // 02x01
            KC_W,                  // 02x02
            KC_E,                  // 02x03
            KC_R,                  // 02x04
            KC_T,                  // 02x05
            KC_Y,                  // 02x06
            KC_U,                  // 02x07
            KC_I,                  // 02x08
            KC_O,                  // 02x09
            KC_P,                  // 02x0A
            KC_LBRC,               // 02x0B
            KC_RBRC,               // 02x0C
            KC_BSLS,               // 02x0D
            KC_DEL,                // 02x0E
            KC_END,                // 02x0F
            KC_PGDN,               // 02x10
            KC_P7,                 // 02x11
            KC_P8,                 // 02x12
            KC_P9,                 // 02x13
            KC_PPLS,               // 02x14
        },

        // Row 3
        {
            KC_CAPS,               // 03x00
            KC_A,                  // 03x01
            KC_S,                  // 03x02
            KC_D,                  // 03x03
            KC_F,                  // 03x04
            KC_G,                  // 03x05
            KC_H,                  // 03x06
            KC_J,                  // 03x07
            KC_K,                  // 03x08
            KC_L,                  // 03x09
            KC_SCLN,               // 03x0A
            KC_QUOT,               // 03x0B
            KC_NO,                 // 03x0C
            KC_ENT,                // 03x0D
            KC_NO,                 // 03x0E
            KC_NO,                 // 03x0F
            KC_NO,                 // 03x10
            KC_P4,                 // 03x11
            KC_P5,                 // 03x12
            KC_P6,                 // 03x13
            KC_NO,                 // 03x14
        },

        // Row 4
        {
            KC_LSFT,               // 04x00
            KC_Z,                  // 04x01
            KC_X,                  // 04x02
            KC_C,                  // 04x03
            KC_V,                  // 04x04
            KC_B,                  // 04x05
            KC_N,                  // 04x06
            KC_M,                  // 04x07
            KC_COMM,               // 04x08
            KC_DOT,                // 04x09
            KC_SLSH,               // 04x0A
            KC_NO,                 // 04x0B
            KC_RSFT,               // 04x0C
            KC_NO,                 // 04x0D
            KC_NO,                 // 04x0E
            KC_UP,                 // 04x0F
            KC_NO,                 // 04x10
            KC_P1,                 // 04x11
            KC_P2,                 // 04x12
            KC_P3,                 // 04x13
            KC_PENT,               // 04x14
        },

        // Row 5
        {
            KC_LCTL,               // 05x00
            KC_LGUI,               // 05x01
            KC_LALT,               // 05x02
            KC_NO,                 // 05x03
            KC_NO,                 // 05x04
            KC_SPC,                // 05x05
            KC_NO,                 // 05x06
            KC_NO,                 // 05x07
            QK_USER,                // 05x08  0x7E40,
            KC_RALT,               // 05x09
            KC_APP,                // 05x0A
            KC_NO,                 // 05x0B
            KC_RCTL,               // 05x0C
            KC_NO,                 // 05x0D
            KC_LEFT,               // 05x0E
            KC_DOWN,               // 05x0F
            KC_RGHT,               // 05x10
            KC_P0,                 // 05x11
            KC_NO,                 // 05x12
            KC_PDOT,               // 05x13
            KC_NO,                 // 05x14
        },
    },
};