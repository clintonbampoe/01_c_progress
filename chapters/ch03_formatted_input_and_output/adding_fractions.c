// This program demonstrates the ability of SCANF to match patterns

#include <stdio.h>

int main(void) {
    int num1, denom1, num2, denom2, num_result, denom_result;

    // taking input for first fraction
    printf("Enter the first fraction: ");
    scanf("%d / %d", &num1, &denom1);

    // taking input for second fraction
    printf("Enter the second fraction: ");
    scanf("%d / %d", &num2, &denom2);

    // formula for adding fractions
    num_result = num1 * denom2 + num2 * denom1;
    denom_result = denom1 * denom2;

    // matching results and printing them
    printf("The result is: %d/%d", num_result, denom_result);
}