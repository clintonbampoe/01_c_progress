#include <stdio.h>

#define ARRAY_SIZE 3

int main() {
    // variable init
    int a[ARRAY_SIZE];
    const int array_length = (int)sizeof(a)/sizeof(a[0]);

    // input block
    printf("Enter %d numbers: ", ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &a[i]);
    }

    // main code logic block
    printf("In reverse order: ");
    for (int i = (array_length - 1); i >= 0; i--) {
        printf(" %d", a[i]);
    }
    return 0;
}