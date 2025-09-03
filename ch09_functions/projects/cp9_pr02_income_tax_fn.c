#include <stdio.h>
#include <stdlib.h>

// fn declaration
float income_tax(float);

// fn00 main
int main(void) {
	int income = 0;
	int sf_return_value = 0;

	// input 
	printf("Enter income: ");
	sf_return_value = scanf("%d", &income);

	// output
	printf("Tax: $%.2f", income_tax(income));

	return EXIT_SUCCESS;
}

// fn01 income tax
float income_tax(float income) {
	float tax = 0.0f;

	if (income < 750) {
		tax = .01f * income;
	}
	else if (income < 2250) {
		tax = ((income - 750) * .02f) + 7.5f;
	}
	else if (income < 3750) {
		tax = ((income - 2250) * 0.03f) + 37.5f;
	}
	else if (income < 5250) {
		tax = ((income - 3750) * 0.04f) + 82.5f;
	}
	else if (income < 7000) {
		tax = ((income - 5250) * 0.05f) + 142.5f;
	}
	else {
		tax = ((income - 7000) * 0.06f) + 230.0f;
	}
	
	// return value
	return tax;
}