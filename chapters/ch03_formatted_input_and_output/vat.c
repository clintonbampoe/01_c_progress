// This program calculates the total amount after the tax percentage

#include <stdio.h>

int main(void) {
    float total, amount, percentage, raw_value;

    printf("Enter the tax percentage: ");
    scanf("%f", &raw_value);

    percentage = raw_value / 100;

    printf("Enter amount: ");
    scanf("%f", &amount);

    total = amount * (1 + percentage);

    printf("Total amount: %.2f", total);
    return 0;

}