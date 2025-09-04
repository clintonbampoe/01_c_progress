#include <stdio.h>

int main(void) {
	// var init
	int size = 0;


	// prog greeting
	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	// user input
	do {
		printf("Enter size of magic square: ");
		scanf("%d", &size);
	} while (size % 2 == 0);
	
	const int square_size = size;

	// main logic block


	return 0;
}