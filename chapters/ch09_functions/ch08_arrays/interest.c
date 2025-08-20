// CHAPTER 8, ARRAYS
// EXAMPLE: COMPOUND INTEREST PROGRAM

#include <stdio.h>
#define ARRAY_SIZE ((int)(sizeof(amount) / sizeof(amount[0])))

// IMPORTANT: interest_rate is reset to default every time its used

int main(void) {
    double amount[5];
    double interest_rate;
    double principal = 100.0f;
    int number_of_years;
    int i;                 // for iteration in inner loop

    // enter interest rate
    printf("Enter interest rate: ");
    scanf("%lf", &interest_rate);
    double default_interest_rate = interest_rate;

    // enter number of years
    printf("Enter number of years: ");
    scanf("%d", &number_of_years);

    printf("\nYears");          // for output formatting purposes

    // another loop: To print the header
    for (i = 0; i < ARRAY_SIZE; i++, interest_rate++) {   // loop until i reaches the last index of the array, amount
        printf("%10d%%", (int)(interest_rate));        // print the header
        amount[i] = principal;                            // set value of amount[i] to 100
    }
    // reset interest rate to default
    interest_rate = default_interest_rate;

    printf("\n");

    // outer loop: Counting the time from 1 to highest
    for (int x = 1; x <= number_of_years; x++) {
        printf("%5d", x);

        // inner loop: Incrementing the interest rate
        for (i = 0; i < ARRAY_SIZE; interest_rate++, i++) {
            // interest is calculated and added to principal (amount[i]) to make total amount
            amount[i] += (interest_rate / 100.0) * amount[i];
            printf(" %10.2f", amount[i]);
        }
        // reset interest_rate to default value
        interest_rate = default_interest_rate;

        // next line
        printf("\n");
    }

    // end
    return 0;
}
