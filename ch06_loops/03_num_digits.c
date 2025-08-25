#include <stdio.h>

int main() {
    int i, digit = 0;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &i);

    do {
        i = i / 10;
        digit++;
    }while (i != 0);

    printf("The number has %d digits. ", digit);
}