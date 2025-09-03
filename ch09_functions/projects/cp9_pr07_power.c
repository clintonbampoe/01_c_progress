#include <stdio.h>


// fn declaration
int exp(int x, int power);


// fn00 main
int main(void) {
	// var init
	int base, expo;
	

	// user input
	printf("Enter a base and exponent (base, exponent) : (");
	scanf("%d,%d", &base, &expo);

	printf("Result : %d", exp(base, expo));
	return 0;
}


// fn01 power function (recursive)
int exp(int x, int n) {
	if (n == 0) {
		return 1;
	}
	else {
		if (n % 2 == 0) {
			int half = exp(x, n/2);
			return half * half;
		}
		else {
			return x * exp(x, n - 1);
		}
	}
}