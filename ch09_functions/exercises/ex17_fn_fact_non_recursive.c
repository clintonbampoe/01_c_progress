#include <stdio.h>

// fn declaration
int fact(int);

// fn00 main
int main(void) {
    int number = 0;
    printf("Enter a number for the factorial: ");
    scanf("%d", &number);

    printf("Factorial = %d\n", fact(number));
    return 0;
}

// fn01 factorial
int fact(int n) {
    int factorial = 1;
    // multiplying by 0 would always return 0
    // start iterating from 1 to n
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}