// CHAPTER 8, ARRAYS
// Example 2, PROJECT 1

#include <stdio.h>
#include <stdbool.h>
#define  ARRAY_SIZE 10
int main() {
    int digit_seen[ARRAY_SIZE] = {0};
    long number = 0;        // to accept long numbers
    int digit = 0;
    bool repeated_digit = false;

    printf("Enter a number: ");
    scanf("%ld", &number);

    while (number > 0) {
        digit = number % 10;        // get last digit
        digit_seen[digit]++;
        number = number / 10;       // to remove last digit
    }

    printf("Repeated digit (s): ");

    for (int i = 0; i < ARRAY_SIZE; i++){
        if (digit_seen[i] > 1) {
            printf("%d ", i);
            repeated_digit = true;
        }
    }

    if (!repeated_digit) {
        printf(" None.\n");

    }
    // end
    return 0;
}