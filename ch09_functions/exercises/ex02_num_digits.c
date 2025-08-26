#include <stdio.h>

// fn declaration
int num_digits(long);

// fn00_main
int main(void) {
    long num;
    printf("Enter a number: ");
    scanf("%ld", &num);

    printf("Number of digits = %d", num_digits(num));
}

// fn01_ number of digits
int num_digits(long n) {
    int digits = 0;
    while (n > 0) {
        n /= 10;
        digits++;
    }
    return digits;
}