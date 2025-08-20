// This program demonstrates the ability of SCANF to match patterns
// Lowkey switch statements are goated

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// num: numerator           denom: denominator

int main(void) {
    int num1, denom1, num2, denom2, num_result = 0, denom_result = 0;

    // taking input for first fraction
    // handling invalid input
    printf("Enter the first fraction: ");
    if (scanf("%d / %d", &num1, &denom1) != 2) {
        printf("Invalid Input\n");
        return 1;
    }
    // handling undefined fractions
    if (denom1 == 0) {
        printf("Undefined! Denominator cannot be equal to 0\n");
        return 1;
    }


    // taking input for operator
    char operator;
    printf("Enter operator (+, -, *, / ): ");
    if (scanf(" %c", &operator) != 1) {
       printf("Invalid input for operator!\n");
       return 1;
   }


    // taking input for second fraction
    // handling invalid input
    printf("Enter the second fraction: ");
    if (scanf("%d / %d", &num2, &denom2) != 2) {
        printf("Invalid Input.\n");
        return 1;
    }

    // handling undefined fractions
    if (denom2 == 0) {
        printf("Undefined! Denominator cannot be equal to 0\n");
        return 1;
    }


    // handling computation for each operator
    if (operator == '+') {          // addition
        num_result = (num1 * denom2) + (num2 * denom1);
        denom_result = denom1 * denom2;
    }
    else if (operator == '-') {     // subtraction
        num_result = (num1 * denom2) - (num2 * denom1);
        denom_result = denom1 * denom2;
    }
    else if (operator == '*') {     // multiplication
        num_result = (num1 * num2);
        denom_result = denom1 * denom2;
    }
    else if (operator == '/') {     // division
        num_result = (num1 * denom2);
        denom_result = num2 * denom1;
    }
    else    // error handling for operator input
        printf("Invalid operator entered!\n");

    // initializing boolean variables
    bool zero_value = false, negative = false;

    // handling neg fractions and zero values
    if (num_result == 0) {
        zero_value = true;
    }
    else if (denom_result < 0 && num_result > 0) {
        negative = true;
    }

    // Importing the function to find the GCD
    // using absolute values to print unintending loop termination
    int n = abs(num_result), m = abs(denom_result);
    while (n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }
    num_result = num_result / m;
    denom_result = denom_result / m;

    // handing output negative fractions and division by zero
    if (zero_value) {               // if numerator is equal to zero
        printf("0\n");
    }
    else if (denom_result == 1) {   // if denominator is 1, print fraction as whole number
        printf("The result is %d\n", num_result);
    }
    else if (negative) {            // if only denominator is negative, assign entire fraction as negative
        printf("The result is: -%d/%d\n", num_result, abs(denom_result));
    }
    else
        printf("The result is: %d/%d\n", num_result, denom_result);

    // end
    return 0;
}
