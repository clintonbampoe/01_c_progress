#include <stdio.h>

int main() {
    // i: income        t: tax
    float i, tax;

    printf("Enter your taxable income: ");
    scanf("%f", &i);


    if (i < 750) {
        tax = (0.01 * i);
    }
    else if (i < 2250) {
        tax = 7.5 + (0.02 * (i - 750));
    }
    else if (i < 3750) {
        tax = 37.5 + (0.03 * (i - 2250));
    }
    else if (i < 5250) {
        tax = 82.5 + (0.04 * (i - 3750));
    }
    else if (i < 7000) {
        tax = 142.5 + (0.05 * (i - 5250));
    }
    else {
        tax = 230.0 + (0.06 * (i - 7000));
    }
    printf("Taxable income: %.2f", tax);
}