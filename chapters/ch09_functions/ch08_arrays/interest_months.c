// CHAPTER 8, ARRAYS
// Example 3, Computing Interest

#include <stdio.h>
#define AMOUNT 100.0f
#define COLUMNS 5
#define NUM_OF_MONTHS 12

int main(void) {

    // variable init
    double total[COLUMNS];
    for (int i = 0; i < COLUMNS; i++) {
        total[i] = AMOUNT;
    }
    int rate = 0, years = 0;

    // input block
    printf("Enter interest rate: ");
    scanf("%d", &rate);
    printf("Enter number of years: ");
    scanf("%d", &years);

    // formatting
    printf("Years");
    for (int header = 0; header < COLUMNS; header++) {
        printf("%8d%%", rate + header);
    }
    printf("\n");

    // outer loop (Iterating Years)
    for (int row = 1; row <= years; row++) {
        printf("%-7d", row);

        // inner loop (Iterating Interest Rates)
        for (int col = 0; col < COLUMNS; col++) {
            double current_rate = (double)(rate + col);
            double monthly_rate = current_rate /12;

            // iterating through months
            for (int month = 0; month < NUM_OF_MONTHS; month++) {
                double rate_time = (double)(monthly_rate/100);
                total[col] += total[col] * rate_time;
            }
            printf("%9.2f", total[col]);
        }

        // new line
        printf("\n");
    }
}