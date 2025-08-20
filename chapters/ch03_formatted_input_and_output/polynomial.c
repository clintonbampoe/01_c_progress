//
// Created by KSTS LAB on 6/2/2025.
// This program solves a polynomial

#include <stdio.h>

int main(void){
    int xv, answer;
    printf("Enter the X value: ");
    scanf("%d", &xv);

    answer = ((((3*xv +2)*xv-5)*xv-1)*xv+7)*xv-6;
    printf("The value of the equation is: %d", answer);
    return 0;
}