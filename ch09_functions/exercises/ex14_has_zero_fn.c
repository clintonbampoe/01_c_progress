#include <stdbool.h>
#include <stdio.h>

// fn declaration
bool has_zero(const int [], int);

// macro def
#define SIZE 5

// fn00 main
int main(void) {
    // sample array
    int samp[SIZE] = {0, 2, 3, 4, 5};

    printf("Result = %d", has_zero(samp, SIZE));
}

// fn01 has zero function
bool has_zero(const int arr[], const int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            return true;
        }
    }
    return false;
}