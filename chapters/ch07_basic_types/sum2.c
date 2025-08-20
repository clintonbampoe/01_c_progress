// Sums a series of doubles and prints the result

#include <stdio.h>

int main() {
    double sum = 0, n;

    do {
        printf("Enter number(0 to terminate): ");
        scanf("%lf", &n);
        if (n == 0)
            break;
        sum += n;
    } while (1);

    printf("The sum is: %f", sum);
    return 0;

}