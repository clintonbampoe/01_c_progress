// CHAPTER 7, BASIC TYPES
// PROJECT 14
// Weird Factorial Program
// this program is to test the highest value of n for which the program prints the factorial of n for the basic types

#include <stdio.h>
int main(void) {
    // using typedef so the types can be changed relatively easily
    typedef int type_t;
    type_t n, factorial = 1;

    // taking input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // computing for factorial
    for ( int i = 1; i <= n; i++) {
         factorial *= i;
    }
    printf("Factorial of %d: %d", n, factorial);

    // end
    return 0;
}