#pragma once

#include "sh68f90a.h"
#include "keycodes.h"

#define MATRIX_ROWS 6
#define MATRIX_COLS 21

enum custom_keycodes {
    RGB_FX_NEXT = SAFE_RANGE, // cycle to the next backlight animation
    RESET_HOLD,               // held: enables the factory-reset chord
    FACT_RESET,               // factory-reset all user settings (only acts while RESET_HOLD is held)

    KB_SAFE_RANGE,
};

// Row Pins
#define KB_R0 P7_0
#define KB_R1 P7_1
#define KB_R2 P7_2
#define KB_R3 P7_3
#define KB_R4 P5_3
#define KB_R5 P5_4

// Column Pins
#define KB_COL_P1_MASK  ((uint8_t)(_P1_0 | _P1_1 | _P1_2 | _P1_3 | _P1_4 | _P1_5))
#define KB_COL_P2_MASK  ((uint8_t)(_P2_0 | _P2_1 | _P2_2 | _P2_3 | _P2_4 | _P2_5))
#define KB_COL_P3_MASK  ((uint8_t)(_P3_0 | _P3_1 | _P3_2 | _P3_3 | _P3_4 | _P3_5))
#define KB_COL_P5_MASK  ((uint8_t)(_P5_0 | _P5_1 | _P5_2))
#define KB_C0  P2_2  // tab
#define KB_C1  P2_3  // q
#define KB_C2  P2_4  // w
#define KB_C3  P2_5  // e
#define KB_C4  P3_0  // r
#define KB_C5  P1_4  // t
#define KB_C6  P1_5  // y
#define KB_C7  P2_0  // u
#define KB_C8  P2_1  // i
#define KB_C9  P3_3  // o
#define KB_C10 P3_2  // p
#define KB_C11 P3_4  // [
#define KB_C12 P3_1  // ]
#define KB_C13 P3_5  // back slash
#define KB_C14  P1_3 //
#define KB_C15  P1_2
#define KB_C16  P1_1
#define KB_C17  P1_0
#define KB_C18  P5_2
#define KB_C19  P5_1
#define KB_C20  P5_0

// LED Column Pin
#define LED_PWM_C0  PWM12
#define LED_PWM_C1  PWM13
#define LED_PWM_C2  PWM14
#define LED_PWM_C3  PWM15
#define LED_PWM_C4  PWM00
#define LED_PWM_C5  PWM24
#define LED_PWM_C6  PWM25
#define LED_PWM_C7  PWM10
#define LED_PWM_C8  PWM11
#define LED_PWM_C9  PWM03
#define LED_PWM_C10 PWM02
#define LED_PWM_C11 PWM04
#define LED_PWM_C12 PWM01
#define LED_PWM_C13 PWM05
#define LED_PWM_C14 PWM23
#define LED_PWM_C15 PWM22 
#define LED_PWM_C16 PWM21
#define LED_PWM_C17 PWM20
#define LED_PWM_C18 PWM42
#define LED_PWM_C19 PWM41
#define LED_PWM_C20 PWM40

/*
Pin - PWM
P1.0/PWM20
P1.1/PWM21
P1.2/PWM22
P1.3/PWM23
P1.4/PWM24
P1.5/PWM25
P5.0/PWM40
P5.1/PWM41
P5.2/PWM42
P3.0/PWM00
P3.1/PWM01
P3.2/PWM02
P3.3/PWM03
P3.4/PWM04
P2.0/PWM10
P2.1/PWM11
P2.2/PWM12
P2.3/PWM13
P2.4/PWM14
P2.5/PWM15
*/

// LED Row Pins
#define LED_ROW_PINS_USER_DEF (uint8_t)(_P6_0 | _P6_1 | _P6_2 | _P6_3 | _P6_4 | _P6_5)
#define LED_R0 P6_0
#define LED_R1 P6_1
#define LED_R2 P6_2
#define LED_R3 P6_3
#define LED_R4 P6_4
#define LED_R5 P6_5

// KC_CAPS LED Pin
#define LED_CAPS P0_3

// KC_CAPS LED Pin Bit
#define LED_CAPS_P0_3 _P0_3
