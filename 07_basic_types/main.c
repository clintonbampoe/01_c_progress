#include <stdio.h>
// this program prints a fraction in its lowest terms

int main() {
    // Initializing the variables
    // x: numerator         y: denominator
    int x, y;

    // taking input for the fraction
    printf("Enter a fraction: ");
    scanf("%d/%d", &x, &y);

    // Importing the function to find the GCD
    // mapping x and y unto n and m
    int n = x, m = y, r;
    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }
    x = x / m;
    y = y / m;
    printf("In lowest terms: %d/%d. \n", x, y);
    return 0;
}