
#include <stdio.h>

// fn declaration
void part_element (int arr[], int size);

// macro declaration
#define ARR_SIZE 7

// fn00_main
int main(void) {
    int array[ARR_SIZE] = {12, 3, 6, 18,  7, 15, 10};

    part_element(array, ARR_SIZE);
    return  0;
}

// fn01_part_element
void part_element(int arr[], const int size) {
    int low = 0;
    int high = (size - 1);
    int part_el = arr[low];

    while (low < high) {
        // decrement high until you find value less than part_el
        while (arr[high] > part_el) {
            high--;
        }
        if (low >= high)
            break;
        arr[low] = arr[high];

        // increment low until you find value greater than part_el
        while (arr[low] < part_el) {
            low++;
        }
        if (low >= high)
            break;
        arr[high] = arr[low];
    }
    // swap part_el with position of high
    arr[high] = part_el;

    // output
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%d ", arr[i]);
    }
}