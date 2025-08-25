// Toughest one yet
#include <stdio.h>

int main(void) {
    // declaring variables
    int a, b, c, d;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int largest = a;
    int smallest = a;
    if (b > largest) {
        largest = b;
    }
    if (b < smallest) {
        smallest = b;
    }
    if (c > largest) {
        largest = c;
    }
    if (c < smallest) {
        smallest = c;
    }
    if (d > largest) {
        largest = d;
    }
    if (d < smallest) {
        smallest = d;
    }
    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);
    return 0;
}