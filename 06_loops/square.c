#include <stdio.h>

int main() {
    int n;
    printf("This program prints a table of squares. \n");
    printf("Enter the number of entries in table: ");
    scanf("%d",&n);

    int i = 1;
    while (i <= n) {
        printf("%10d%10d\n", i, i*i);
        i++;
    }
}