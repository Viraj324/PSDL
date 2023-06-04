/*
 * File:   assign4.c
 * Author: ADMIN
 *
 * Created on 4 June, 2023, 5:47 PM
 */



#include <xc.h>

void delay(){
    T0CON = 0x07;
    TMR1 = 18862;
    INTCONbits.TMR0IF = 0;
    T0CONbits.TMR0ON = 1;
    while(INTCONbits.TMR0IF == 0);
    INTCONbits.TMR0IF = 0;
    T0CONbits.TMR0ON = 1;
}

void main(void) {
    TRISB = 0;
    PORTB = 0x0F;
    while(1){
        delay();
        PORTB = ~PORTB;
    }
    return;
}

