// CHAPTER 8, ARRAYS
// PROJECT 3, Repeated Digits Program Modified

#include <stdbool.h>
#include <stdio.h>
#define  ARRAY_SIZE 10
#define COLUMN_WIDTH 15

int main() {
    // variable initialization
    int digit_seen[ARRAY_SIZE] = {0};
    long number = 0;        // to accept long numbers
    int digit = 0;


    do {
        // input block
        printf("Enter a number: (0 or -1 to quit): ");
        scanf("%ld", &number);

        // terminate loop if number is less than 0
        if (number <= 0) {
            printf("Program Terminated.");
            break;
        }

        // main code logic
        while (number > 0) {
            digit = number % 10;        // get last digit
            digit_seen[digit]++;
            number = number / 10;       // to remove last digit
        }

        // formatted output
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

        // reset digit_seen array to prepare for next loop iteration
        for (int i = 0; i < ARRAY_SIZE; i++) {
            digit_seen[i] = 0;
        }
    }while (true);

    // end
    return 0;
}