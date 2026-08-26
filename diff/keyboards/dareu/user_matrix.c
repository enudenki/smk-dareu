#include "kbdef.h"
#include "user_matrix.h"


void user_matrix_pre_scan(uint8_t col)
{
    // set all columns to high
    P1 |= KB_COL_P1_MASK;
    P2 |= KB_COL_P2_MASK;
    P3 |= KB_COL_P3_MASK;
    P5 |= KB_COL_P5_MASK;

    // set current (!) column to low
    switch (col) {
        case 0:  KB_C0 = 0;  break;
        case 1:  KB_C1 = 0;  break;
        case 2:  KB_C2 = 0;  break;
        case 3:  KB_C3 = 0;  break;
        case 4:  KB_C4 = 0;  break;
        case 5:  KB_C5 = 0;  break;
        case 6:  KB_C6 = 0;  break;
        case 7:  KB_C7 = 0;  break;
        case 8:  KB_C8 = 0;  break;
        case 9:  KB_C9 = 0;  break;
        case 10: KB_C10 = 0; break;
        case 11: KB_C11 = 0; break;
        case 12: KB_C12 = 0; break;
        case 13: KB_C13 = 0; break;
        case 14: KB_C14 = 0; break;
        case 15: KB_C15 = 0; break;
        case 16: KB_C16 = 0; break;
        case 17: KB_C17 = 0; break;
        case 18: KB_C18 = 0; break;
        case 19: KB_C19 = 0; break;
        case 20: KB_C20 = 0; break;
    }
}

uint8_t user_matrix_scan_col(uint8_t col)
{
    col;
    // GPIO      GPIO bit    Row#     Return bit
    // P7_0         0         R0        bit 0
    // P7_1         1         R1        bit 1
    // P7_2         2         R2        bit 2
    // P7_3         3         R3        bit 3
    // P5_3         3         R4        bit 4
    // P5_4         4         R5        bit 5
    //
    // Return bit:
    // bit 7  bit 6  bit 5  bit 4  bit 3  bit 2  bit 1  bit 0
    //   1      1    P5_4   P5_3   P7_3   P7_2   P7_1   P7_0
    //               R5     R4     R3     R2     R1     R0
    return (P7 & 0x0F) | ((P5 & 0x18) << 1) | 0xC0;
}

void user_matrix_post_scan()
{
    // set all columns down to low
    P1 &= (uint8_t)~KB_COL_P1_MASK;
    P2 &= (uint8_t)~KB_COL_P2_MASK;
    P3 &= (uint8_t)~KB_COL_P3_MASK;
    P5 &= (uint8_t)~KB_COL_P5_MASK;
}
