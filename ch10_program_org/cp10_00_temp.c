// TEMP HOLDING FOR FRAGMENTS OF STACK PROGRAM

#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 5


// external variables
int contents[STACK_SIZE];
int top;
bool stack_overflow;
bool stack_underflow;
int i;

// fn declaration
void make_empty(void);
bool is_full(void);
bool is_empty(void);
void push(void);
int pop(void);


// fn00 main
int main(void) {

}


// fn01
void make_empty(void) {
	top = 0;
}

// fn02
bool is_full(void) {
	return top == STACK_SIZE;
}

// fn03 
bool is_empty(void) {
	return top == 0;
}

// fn04
void push(void) {
	if (is_full()) {
		stack_overflow = true;
	}
	else {
		contents[top++] = i;
	}
}

// fn05
int pop(void) {
	if (is_empty()) {
		stack_underflow = true;
	}
	else {
		return contents[--top];
	}
}