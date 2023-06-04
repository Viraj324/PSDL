/*
 * File:   assign2.c
 * Author: ADMIN
 *
 * Created on 4 June, 2023, 5:57 PM
 */


#include <xc.h>

void main(void) {
    int arr[10];
    int sum = 0;
    for(int i = 0;i<10;i++){
        sum = sum + i;
    }
    TRISB = 0;
    PORTB = sum;
    return;
}

