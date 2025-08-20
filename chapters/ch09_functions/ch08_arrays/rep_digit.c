// CHAPTER 8, ARRAYS
// EXAMPLE, REPEATED DIGITS
// This program takes a number and tells if certain digits are repeated or not

#include <stdio.h>
#include <stdbool.h>
int main() {
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0 ) {
        digit = n % 10;
        if (digit_seen[digit])
            break;
        digit_seen[digit] = true;
        n = n / 10;
    }
    if (n > 0) {
        printf("Repeated digit");
    }
    else {
        printf("Non-repeated digit");
    }

    // end
    return 0;
}