// Does the same thing as squares.c but this one uses the for loop.
#include <stdio.h>


int main() {
    int n, i;
    printf("This program prints a table of squares. \n");
    printf("Enter the number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);
    }
}