#include <stdio.h>
// fn declaration
void part_element(int [], int);

// macro declaration
#define ARR_SIZE 8
#define MAX 100

// main
int main(void) {
    int array[ARR_SIZE] = {12, 3, 6, 18, 7, 15, 10, MAX};

    part_element(array, ARR_SIZE);
}

// fn02_partitioning
void part_element(int arr[], const int size) {
    int low = 0;
    int high = (size - 1);          // arrays are 0 indexed
    const int pivot = arr[0];
    int temp = 0;

    while (low < high) {
        do {
            low++;
        } while (arr[low] <= pivot);

        do {
            high--;
        } while (arr[high] > pivot);

        if (low < high) {
            // swap
            temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
        }
    }
    // swap (pivot, arr[high])
    temp = arr[0];
    arr[0] = arr[high];
    arr[high] = temp;

    // output
    for (int i = 0; i < ARR_SIZE; i++ ) {
        printf("%d ");
    }
    printf("\n");
}
