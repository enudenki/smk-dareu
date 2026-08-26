#include "kbdef.h"
#include "user_init.h"
#include "pwm.h"

// TODO: move these defines out
#define PWM_PERD 0x0400 // 1024 / PWM_CLK ~= 43 us

#define PWM_DUTY1 (uint16_t)PWM_PERD
#define PWM_DUTY2 (uint16_t)0

#define PWM_PERDH_INIT ((uint8_t)(PWM_PERD >> 8))
#define PWM_PERDL_INIT ((uint8_t)(PWM_PERD))

void user_gpio_init();
void user_pwm_init();

void user_init()
{
    user_gpio_init();
    user_pwm_init();

    IEN1 |= (1 << 1); // EPWM0
}

void user_gpio_init()
{
    // configure driving capabilities
    DRVCON = 0x05; // allow P1 to be changed
    P1DRV  = 0x00; // 25mA

    DRVCON = 0x45; // allow P2 to be changed
    P2DRV  = 0x00; // 25mA

    DRVCON = 0x85; // allow P3 to be changed
    P3DRV  = 0x00; // 25mA

    DRVCON = 0xC5; // allow P5 to be changed
    P5DRV  = 0x00; // 25mA

    DRVCON = 0;

    // Set column pins to output mode.
    P0CR = (uint8_t)(LED_CAPS_P0_3);
    P1CR = (uint8_t)(_P1_0 | _P1_1 | _P1_2 | _P1_3 | _P1_4 | _P1_5);
    P2CR = (uint8_t)(_P2_0 | _P2_1 | _P2_2 | _P2_3 | _P2_4 | _P2_5);
    P3CR = (uint8_t)(_P3_0 | _P3_1 | _P3_2 | _P3_3 | _P3_4 | _P3_5);
    P5CR = (uint8_t)(_P5_0 | _P5_1 | _P5_2);

    // Set row pins to output mode for LEDs.
    P6CR = LED_ROW_PINS_USER_DEF;

    // Enable pull-ups on the row pins, since they are configured as input pins.
    P5PCR = (uint8_t)(_P5_3 | _P5_4);
    P7PCR = (uint8_t)(_P7_0 | _P7_1 | _P7_2 | _P7_3);

    P0 = (uint8_t)(LED_CAPS_P0_3);

    // Enable pull-ups on the row pins for LEDs.
    P6 = LED_ROW_PINS_USER_DEF;
}

void user_pwm_init()
{
    PWM0PERDH = PWM_PERDH_INIT;
    PWM0PERDL = PWM_PERDL_INIT;

    PWM1PERDH = PWM_PERDH_INIT;
    PWM1PERDL = PWM_PERDL_INIT;

    PWM2PERDH = PWM_PERDH_INIT;
    PWM2PERDL = PWM_PERDL_INIT;

    // add
    PWM4PERDH = PWM_PERDH_INIT;
    PWM4PERDL = PWM_PERDL_INIT;

    SET_PWM_DUTY(LED_PWM_C0, PWM_DUTY1, PWM_DUTY2);
    SET_PWM_DUTY(LED_PWM_C1, PWM_DUTY1, PWM_DUTY2);
    SET_PWM_DUTY(LED_PWM_C2, PWM_DUTY1, PWM_DUTY2);
    SET_PWM_DUTY(LED_PWM_C3, PWM_DUTY1, PWM_DUTY2);
    SET_PWM_DUTY(LED_PWM_C4, PWM_DUTY1, PWM_DUTY2);
    SET_PWM_DUTY(LED_PWM_C5, PWM_DUTY1, PWM_DUTY2);
    SET_PWM_DUTY(LED_PWM_C6, PWM_DUTY1, PWM_DUTY2);
    SET_PWM_DUTY(LED_PWM_C7, PWM_DUTY1, PWM_DUTY2);
    SET_PWM_DUTY(LED_PWM_C8, PWM_DUTY1, PWM_DUTY2);
    SET_PWM_DUTY(LED_PWM_C9, PWM_DUTY1, PWM_DUTY2);
    SET_PWM_DUTY(LED_PWM_C10, PWM_DUTY1, PWM_DUTY2);
    SET_PWM_DUTY(LED_PWM_C11, PWM_DUTY1, PWM_DUTY2);
    SET_PWM_DUTY(LED_PWM_C12, PWM_DUTY1, PWM_DUTY2);
    SET_PWM_DUTY(LED_PWM_C13, PWM_DUTY1, PWM_DUTY2);
    SET_PWM_DUTY(LED_PWM_C14, PWM_DUTY1, PWM_DUTY2);
    SET_PWM_DUTY(LED_PWM_C15, PWM_DUTY1, PWM_DUTY2);
    SET_PWM_DUTY(LED_PWM_C16, PWM_DUTY1, PWM_DUTY2);
    SET_PWM_DUTY(LED_PWM_C17, PWM_DUTY1, PWM_DUTY2);
    SET_PWM_DUTY(LED_PWM_C18, PWM_DUTY1, PWM_DUTY2);
    SET_PWM_DUTY(LED_PWM_C19, PWM_DUTY1, PWM_DUTY2);
    SET_PWM_DUTY(LED_PWM_C20, PWM_DUTY1, PWM_DUTY2);
}
