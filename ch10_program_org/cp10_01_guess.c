#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// macro def
#define MAX_NUMBER 100

// external variable
int secret_num;

// fn declarations
int generate_secret_number();
void read_guess(int);

// fn00 main
int main(void) {

	// program greeting
	printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);

	// var init
	char command;
	int secret_num;

	// plant RNG seed
	srand((unsigned)time(NULL));

	do {
		secret_num = generate_secret_number();
		printf("A new number has been chosen.\n");

		read_guess(secret_num);

		// play again query
		printf("Play again ?: (Y/N) ");
		scanf(" %c", &command);

	} while (command == 'Y' || command == 'y');

	return 0;
}


// fn01 generate secret number
int generate_secret_number() {
	return (rand() % 100) + 1;
}

// fn02 read guess function
void read_guess(int secret_num) {

	// var init
	int guess_num;
	int guess;

	for (int guess_num = 0; ; guess_num++) {
		printf("Enter guess: ");
		scanf("%d", &guess);

		if (guess == secret_num) {
			printf("You won in %d guesses.\n", guess_num + 1);
			return;
		}
		else if (guess > secret_num) {
			printf("Too high, try again.\n");
		}
		else {
			printf("Too low, try again.\n");
		}
	}
}