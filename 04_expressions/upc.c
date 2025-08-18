#include <stdio.h>

int main() {
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12;

    // Prompt the user to enter the first 11 digits of a code
    printf("Enter the first 12 digits of your UPC code: ");

    // Read all 11 digits in a single, clear scanf call
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

    // Sum of digits at odd positions
    int first_sum = i1 + i3 + i5 + i7 + i9 + i11;

    // Sum of digits at even positions
    int second_sum = i2 + i4 + i6 + i8 + i10;

    int total = (3 * first_sum) + second_sum;

    // Calculate the check digit
    // The standard formula is (10 - (total % 10)) % 10. We use the code's original formula here.
    int check_digit = 9 - ((total - 1) % 10);

    if (check_digit == i12) {
        printf("VALID!");
    }
    else {
        printf("INVALID!");
    }

    return 0;
}