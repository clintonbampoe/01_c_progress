// Does the same thing as square.c but with a different method to show how unrelated C allows the expressions in your for loop to be

#include <stdio.h>

int main() {
    int i, n, odd, square;

    printf("This program does ....");
    printf("Enter the number of entries: ");
    scanf("%d", &n);

    i = 1;
    odd = 3;
    for (square = 1; i <= n; odd +=2 ) {
        printf("%10d%10d \n", i, square);
        ++i;
        square += odd;
    }
}