/*
 * File:   assign1.c
 * Author: ADMIN
 *
 * Created on 4 June, 2023, 5:41 PM
 */


#include <xc.h>

void main(void) {
    TMR0 = 0x07;
    TMR1 = 0x01;
    TRISB = 0;
    PORTB = TMR0 + TMR1;
    return;
}
