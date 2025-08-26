#include <stdio.h>

// fn declaration
int digit_pos(int, int);
int num_digits(long);
// fn00 main
int main(void) {
    // var init
    int num = 0;
    int pos = 0;

    // input
    printf("Enter (number, position): (");
    scanf("%d, %d", &num, &pos);

    printf("Digit: %d", digit_pos(num, pos));
}

// fn01 digit position
int digit_pos(int number, int positon) {
    // var init
    int digit = 0;
    if (positon > num_digits(number)) {
        return 0;
    }

    // else
    for (int i = 0; i < positon; i++) {
        digit = number % 10;
        number /= 10;
    }
    return digit;
}

// fn02 number of digits
int num_digits(long n) {
    int digits = 0;
    while (n > 0) {
        n /= 10;
        digits++;
    }
    return digits;
}