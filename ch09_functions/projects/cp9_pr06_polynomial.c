#include <stdio.h>

// fn declaration
int exp(int, int);
int eval(int);


// fn00 main
int main(void) {
	// var init
	int x;

	
	// input
	printf("Enter the value of x: ");
	scanf("%d", &x);


	int result = eval(x);
	printf("Result = %d", result);


	return 0;
}


// fn01 power function (recursive)
int exp(int x, int power) {
	if (power == 1) {
		return 1;
	}
	else {
		return x* exp(x, power - 1);
	}
}


// fn02 polynomial evaluation function
int eval(int x) {
	return (3 * exp(x, 5)) + (2 * exp(x, 4)) - (5 * exp(x, 3)) - (1 * exp(x, 2)) + (7 * exp(x, 1)) - 6;
}