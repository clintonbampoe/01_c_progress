#include <stdio.h>
#include <stdbool.h> // For using the 'bool' type

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is neither prime nor composite.\n", n);
        return 0; // Exit the program
    }

    bool is_prime = true; // Assume it's prime until proven otherwise

    // Loop from 2 up to the square root of n
    // We only need to check divisors up to sqrt(n) because if n has a divisor
    // greater than its square root, it must also have a divisor smaller than its square root.
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            printf("%d is divisible by %d, therefore it is a composite number.\n", n, d);
            is_prime = false; // Found a divisor, so it's not prime
            break;            // No need to check further
        }
    }

    if (is_prime) {
        printf("%d is a prime number.\n", n);
    }

    return 0; // Indicate successful execution
}