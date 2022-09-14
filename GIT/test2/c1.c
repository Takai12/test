/*
 * c1.c
 *
 *  Created on: 13 thg 9, 2022
 *      Author: caova
 */
#include <stdio.h>

int main(void) {
    int num = 10;
    int *p;
    p = &num;

    printf("pointer: %p \n", p);
    printf("num    : %d \n", num);

    return 0;
}


