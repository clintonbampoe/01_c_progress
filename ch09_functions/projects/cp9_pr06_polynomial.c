#include <stdio.h>

// fn declaration
int exponent(int, int);
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
int exponent(int x, int power) {
	if (power == 0) {
		return 1;
	}
	else {
		return x* exponent(x, power - 1);
	}
}


// fn02 polynomial evaluation function
int eval(int x) {
	return (3 * exponent(x, 5)) + (2 * exponent(x, 4)) - (5 * exponent(x, 3)) - (1 * exponent(x, 2)) + (7 * exponent(x, 1)) - 6;
}