#include <stdio.h>
#include <stdlib.h>

// fn declaration
void swap(int*, int*);
void selection_sort(int[], int);

// macro def
#define SIZE 7
 
// fn00_main
int main(void) {
	// test array
	int array[SIZE] = { 5, 6, 0, 1, 4, 2, 3 };

	selection_sort(array, SIZE);

	// output
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	// end
	return EXIT_SUCCESS;
}

// fn01 swap
void swap(int* x, int* y) {
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}

// fn02 selection sort
void selection_sort(int arr[], int size) {
	if (size <= 1) {
		return;
	}
	int largest = arr[0];
	int pos = 0;

	for (int i = 0; i < size; i++) {
		if (arr[i] > largest) {
			largest = arr[i];
			pos = i;
		}
	}

	// (array zero indexing)
	swap(&arr[pos], &arr[size - 1]);

	selection_sort(arr, size - 1);
}