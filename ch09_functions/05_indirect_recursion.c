#include <stdio.h>

// 00_function_dec
void odd(int);
void even(int);

// 01_main
int main(void) {
    int num = 1;
    odd(num);
    return 0;
}

// 02_odd_def
void odd(int num) {
    if (num <= 10) {
        printf("%d ", num + 1);
        num++;
    }
    even(num);
}

// 03_even_def
void even(int num) {
    if (num <= 10) {
        printf("%d ", num - 1);
        num++;
    }
    odd(num);
}