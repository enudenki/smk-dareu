// #include <at89c51ed2.h>
// #include <C8051F326.h> EA

void debug_led_test_init(void)
{
    P1CR |= _P1_2;    // P1.2: output, pull-up disabled
    P1PCR &= ~_P1_2;
    P6CR |= _P6_4;    // P6.4: output, pull-up disabled
    P6PCR &= ~_P6_4;

    P1_2 = 1;// P1.2 = High (source)
    P6_4 = 0;// P6.4 = Low  (sink)
}

void debug_led_test_init2(void)
{
    // LED column pins: output, pull-up disabled
    P3CR |= _P3_5;    // LED C13
    P1CR |= _P1_3;    // LED C14
    P1CR |= _P1_2;    // LED C15
    P1CR |= _P1_1;    // LED C16
    P1CR |= _P1_0;    // LED C17
    P5CR |= _P5_2;    // LED C18
    P5CR |= _P5_1;    // LED C19
    P5CR |= _P5_0;    // LED C20

    P3PCR &= ~_P3_5;
    P1PCR &= ~(_P1_3 | _P1_2 | _P1_1 | _P1_0);
    P5PCR &= ~(_P5_2 | _P5_1 | _P5_0);

    // LED row pins: output, pull-up disabled
    P6CR |= _P6_0 | _P6_1 | _P6_2 |
            _P6_3 | _P6_4 | _P6_5;

    P6PCR &= ~(_P6_0 | _P6_1 | _P6_2 |
               _P6_3 | _P6_4 | _P6_5);

    // Initially all columns OFF
    P3_5 = 0;
    P1_3 = 0;
    P1_2 = 0;
    P1_1 = 0;
    P1_0 = 0;
    P5_2 = 0;
    P5_1 = 0;
    P5_0 = 0;

    // All rows ON as sink
    P6_0 = 0;
    P6_1 = 0;
    P6_2 = 0;
    P6_3 = 0;
    P6_4 = 0;
    P6_5 = 0;
}


void debug_led_test(void)
{
    // C13
    P3_5 = 1;
    delay_ms(100);
    P3_5 = 0;

    // C14
    P1_3 = 1;
    delay_ms(100);
    P1_3 = 0;

    // C15
    P1_2 = 1;
    delay_ms(100);
    P1_2 = 0;

    // C16
    P1_1 = 1;
    delay_ms(100);
    P1_1 = 0;

    // C17
    P1_0 = 1;
    delay_ms(100);
    P1_0 = 0;

    // C18
    P5_2 = 1;
    delay_ms(100);
    P5_2 = 0;

    // C19
    P5_1 = 1;
    delay_ms(100);
    P5_1 = 0;

    // C20
    P5_0 = 1;
    delay_ms(100);
    P5_0 = 0;
}

void debug_led_all_off(void)
{
    // LED Column: OFF
    P2_2 = 0;  // C0
    P2_3 = 0;  // C1
    P2_4 = 0;  // C2
    P2_5 = 0;  // C3
    P3_0 = 0;  // C4
    P1_4 = 0;  // C5
    P1_5 = 0;  // C6
    P2_0 = 0;  // C7
    P2_1 = 0;  // C8
    P3_3 = 0;  // C9
    P3_2 = 0;  // C10
    P3_4 = 0;  // C11
    P3_1 = 0;  // C12
    P3_5 = 0;  // C13
    P1_3 = 0;  // C14
    P1_2 = 0;  // C15
    P1_1 = 0;  // C16
    P1_0 = 0;  // C17
    P5_2 = 0;  // C18
    P5_1 = 0;  // C19
    P5_0 = 0;  // C20

    // LED Row: OFF
    P6_0 = 1;
    P6_1 = 1;
    P6_2 = 1;
    P6_3 = 1;
    P6_4 = 1;
    P6_5 = 1;
}
