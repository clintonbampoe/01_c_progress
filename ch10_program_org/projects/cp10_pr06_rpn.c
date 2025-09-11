#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// macro def
#define STACK_SIZE 100


// external variables
int stack[STACK_SIZE];
int top = 0;
char ch;
int result;
bool number;
bool operator;

// fn declaration
void clear_stack(void);

bool is_number(char);
bool is_operator(char);

void push(int);
int pop(void);
int evaluate(char);


// fn00 main
int main(void) {
	//
	while (true) {
		int input_check = 0;
		clear_stack();

		printf("Enter an RPN expression: ");

		do {

			// READ CHARACTER
			int operand = 0;
			input_check = scanf(" %c", &ch);


			number = is_number(ch);
			operator = is_operator(ch);
			if (ch == '=')
				break;

			else if (number) {

				switch (ch) {
				case '0': operand = 0;
					break;
				case '1': operand = 1;
					break;
				case '2': operand = 2;
					break;
				case '3': operand = 3;
					break;
				case '4': operand = 4;
					break;
				case '5': operand = 5;
					break;
				case '6': operand = 6;
					break;
				case '7': operand = 7;
					break;
				case '8': operand = 8;
					break;
				case '9': operand = 9;
					break;
				}
				push(operand);
			}
			else if (operator) {
				result = evaluate(ch);
				// push unto stack
				stack[top++] = result;
			}
			else {
				exit(EXIT_SUCCESS);
			}
			top;

		} while (ch != '\n');


		// output
		input_check;
		printf("Value of expression =  %d\n", stack[top - 1]);
	}
}


// FUNCTION DEFINITIONS
// FN01
void clear_stack(void) {
	top = 0;
}


// FN02
bool is_number(char ch) {
	if ((ch - 48) >= 0 && (ch - 48) <= 9) {
		return true;
	}
	else {
		return false;
	}
}
// FN03
bool is_operator(char ch) {
	if (ch == '+' || ch == '-' || ch == '/' || ch == '*') {
		return true;
	}
	else {
		return false;
	}
}


// FN04 PUSH UNTO STACK FUNCTION
void push(int operand) {
	if (top == STACK_SIZE) {

		// stack overflow
		printf("Expression is too complex!\n");
		exit(2);
	}
	else {
		stack[top++] = operand;
	}
}
// FN05 POP ITEM FROM STACK
int pop(void) {
	if (top == 0) {

		// stack underflow
		printf("Not enough operands in expression!\n");
		exit(3);
	}
	else {
		int value = stack[--top];
		stack[top] = 0;
		return value;
	}
}



// FN06 EVALUATE OPERATOR FN
int evaluate(char ch) {
	int num1 = 0;
	int num2 = 0;

	if (ch == '+') {
		num1 = pop();
		num2 = pop();
		return num2 + num1;
	}
	else if (ch == '-') {
		num1 = pop();
		num2 = pop();
		return num2 - num1;
	}
	else if (ch == '*') {
		num1 = pop();
		num2 = pop();
		return num2 * num1;
	}
	else if (ch == '/') {
		num1 = pop();
		num2 = pop();
		return num2 / num1;
	}
}