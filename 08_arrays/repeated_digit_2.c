// CHAPTER 8, ARRAYS
// PROJECT 2, Repeated Digits Program Modified

#include <stdio.h>
#define  ARRAY_SIZE 10
#define COLUMN_WIDTH 15

int main() {
    int digit_seen[ARRAY_SIZE] = {0};
    long number = 0;        // to accept long numbers
    int digit = 0;

    printf("Enter a number: ");
    scanf("%ld", &number);

    while (number > 0) {
        digit = number % 10;        // get last digit
        digit_seen[digit]++;
        number = number / 10;       // to remove last digit
    }
    if (number == 0) {
        digit_seen[0]++;
    }

    printf("%-*s", COLUMN_WIDTH, "Digits:");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("%-*s", COLUMN_WIDTH, "Occurrences:");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", digit_seen[i]);
    }
    printf("\n");

    // end
    return 0;
}