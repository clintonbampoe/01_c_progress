#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

// fn declaration
int roll_dice(void);
bool play_game(void);


// fn00 main
int main(void) {
	// RNG seed
	srand(time(NULL));


	// var init
	int win = 0;
	int loss = 0;
	char query;
	bool game_won;


	do {
		game_won = play_game();
		if (game_won) {
			win++;
			printf("You win! \n");
		}
		else {
			loss++;
			printf("You lose! \n");
		}


		// game retry query
		printf("Play again? \n");
		scanf(" %c", &query);

	} while (query == 'Y' || query == 'y');
	

	// output
	printf("Wins : %d   Losses : %d\n", win, loss);

	return 0;
}


// fn01 dice roll function
int roll_dice(void) {
	srand(time(NULL));
	int dice1 = (rand() % 6) + 1;
	int dice2 = (rand() % 6) + 1;

	return dice1 + dice2;
}


// fn02 play game function
bool play_game(void) {

	// var init
	int result;
	int point;


	for (int roll_num = 0; ; roll_num++) {

		// on first roll
		if (roll_num == 0) {
			result = roll_dice();


			// printing roll_dice result
			switch (result) {
			case 2: case 3: case 7: case 11:
				printf("You rolled: %d\n", result);
				break;
			default:
				printf("Your point is %d\n", result);
			}


			// 
			switch (result) {
			case 2: case 3:
				return false;
			case 7: case 11:
				return true;
			default:
				point = result;
			}
			
		}
		// on subsequent rolls
		else {

			// print roll_dice result
			printf("You rolled %d\n", result);


			// switch statement doesn't work with variables
			if (result == point) {
				return true;
			}
			else if (result == 7) {
				return false;
			}
			// any other value of result is ignored
		}
	}
}