#include <stdio.h>

// fn declaration
int largest_element(const int [], int);
float average(const int [], int);
int num_pos_element(const int [], int);


// macro define
#define SIZE 5
// fn00 main
int main(void) {
    // sample array
    int array[SIZE] = {6, 10, 15, 0, 9};

    // call fn01
    printf("Largest element = %d", largest_element(array, SIZE));

    // call fn02
    printf("Average of elements = %f", average(array, SIZE));

    // call fn03
    printf("Number of positive elements in array = %d", num_pos_element(array, SIZE));
}

// fn01 LARGEST ELEMENT
// first parameter made constant
int largest_element(const int arr[], int size) {
    int largest = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

// fn02 AVERAGE
float average(const int arr[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += (float)arr[i];
    }
    return (sum / (float)size);
}

// fn03 POSITIVE ELEMENT
int num_pos_element(const int arr[], int size) {
    int num_pos_el = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            num_pos_el++;
        }
    }
    return num_pos_el;
}