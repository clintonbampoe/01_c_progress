#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// macro def
#define STACK_SIZE 100

// external variables
char contents[STACK_SIZE];
int top;
char ch;

// fn declarations
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void read(void);
void push(char);
char pop(void);

// fn00 main
/*
	Empties stack and calls read() to read the input.
	It also prints the result of the program
*/
int main(void) {
	make_empty();
	printf("Enter parenthesis and/or braces: ");


	// main call
	do {
		read();
	} while (ch != '\n');


	// print output
	if (is_empty) {
		printf("Parenthesis and/or braces are nested properly.\n");
	}
	else {
		printf("Parenthesis and/or braces are not nested properly.\n");
	}
}


// fn01 read function
/*
	reads input as char types.
	pushes characters unto the stack and pops them from the stack
*/
void read(void) {
	ch = getchar();

	if (ch == '(' || ch == '{') {
		push(ch);
	}
	else if (ch == ')' || ch == '}') {
		char brace = pop();

		// if opening brace does not match closing brace, exit program
		if (brace == '(' && ch == ')') {
			;
		}
		else if (brace == '{' && ch == '}') {
			;
		}
		else {
			printf("Parenthesis are not matched");
			exit(18555);
		}
	}
}


// fn02 push unto stack function
/*
	Pushes the arguments passed unto *stack.
*/
void push(char ch) {
	if (is_full()) {
		printf("Stack Overflow!\n");
		exit(18555);
	}
	else {
		contents[top++] = ch;
	}
}


// fn03 pop from stack function
/*
	Pops characters from stack and returns their value
*/
char pop(void) {
	if (is_empty()) {
		printf("Stack Underflow!");
	}
	else {
		return contents[--top];
	}
}


// make empty function
/*
	Set top of stack position to zero
	Empties stack(in a way)
*/
// fn04
void make_empty(void) {
	top = 0;
}


// is full function
/*
	Checks if stack is full
*/
// fn05
bool is_full(void) {
	return top == STACK_SIZE;
}


// is empty function
/*
	Check if stack is empty
*/
// fn0 
bool is_empty(void) {
	return top == 0;
}