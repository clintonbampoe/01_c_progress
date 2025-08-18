// Torture

#include <stdio.h>

// Defining constants
#define FIRST_DIV 20
#define SEC_DIV 10
#define THIRD_DIV 5
#define FOURTH_DIV 1

int main(void) {
    int value, rep_times;
    int value_af_fd, value_af_sd, value_af_td;

    printf("Enter the amount: ");
    scanf("%d", &value);

    rep_times = value / FIRST_DIV;
    value_af_fd = value - (FIRST_DIV * rep_times);
    printf("$20 bills: %d\n", rep_times);

    rep_times = value_af_fd / SEC_DIV;
    value_af_sd = value_af_fd - (SEC_DIV * rep_times);
    printf("$10 bills: %d\n", rep_times);

    rep_times = value_af_sd / THIRD_DIV;
    value_af_td = value_af_sd - (THIRD_DIV * rep_times);
    printf(" $5 bills: %d\n", rep_times);

    rep_times = value_af_td / FOURTH_DIV;
    printf(" $1 bills: %d\n", rep_times);
    return 0;
}