// CHAPTER 8, ARRAYS
// REVERSE.C
// This program reverses a series of numbers
#include <stdio.h>
#define N 3
int main(void) {
    int a[N];
    printf("Enter %d numbers: ", N);

    // taking input into array
    for (int i = 0; i < N; i++) {
        scanf(" %d", &a[i]);
    }

    // printing the reverse of elements in the array
    printf("In reverse order: ");
    for (int i = (N - 1); i >= 0; i--) {
        printf("%d ", a[i]);
    }

    // end
    return 0;
}