// CHAPTER 7, BASIC TYPES
// PROJECT 14
// Finding the square root of a number using Newton-Raphson method

#include <stdio.h>
#include <math.h>
int main(void) {
    double x, y;
    printf("Enter a positive number: ");
    scanf("%lf", &x);

    double yn = 1;
    do {
        y = yn;
        yn = (y + (x/y)) * 0.5;
    } while (fabs(yn - y) > (0.00001 * y));
    printf("%.5lf\n", yn);
    // end
    return 0;
}