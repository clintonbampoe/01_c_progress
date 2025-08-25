#include <stdio.h>

// fn declaration
void quick_sort(int [], int, int);
int part_element(int [], int, int);

// macro definition
#define ARR_SIZE 7

// fn00_main
int main(void) {
    int array[ARR_SIZE] = {12, 3, 6, 18,  7, 15, 10};

    // call quick sort function
    quick_sort(array, 0, (ARR_SIZE - 1));

    // output of sorted array
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// fn01_quick_sort
void quick_sort(int arr[], int low, int high) {
    int pivot = 0;
    if (low < high) {
        pivot = part_element(arr, low, high);

        // solve left hand side
        quick_sort(arr, low, (pivot - 1));

        // solve right hand side
        quick_sort(arr, (pivot + 1), high);
    }
}

// fn02_partition element
int part_element(int arr[], int low, int high) {
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

    // return position of partitioning element
    return high;
}