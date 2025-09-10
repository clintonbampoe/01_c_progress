#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>



// macro def
#define NUM_CARDS 5
#define NUM_RANKS 14
#define NUM_SUITS 4
#define RANK 0
#define SUIT 1

// external variables
bool ace_low, royal, straight, flush, four, three;
int pairs;		// can be 0, 1 or 2


// function declaration
void read_card(int [NUM_CARDS][2]);
void analyze_hand(int [NUM_CARDS][2]);
void print_result(void);


// main function
/* 
* main function calls read_card, analyze_hand and print_result repeatedly
*/
int main(void) {
	// var init 
	int hand[5][2];

	while (true) {
		read_card(hand);
		analyze_hand(hand);
		print_result();

	}
	return 0;
}


// fn01 read card
/*
	reads cards into external variables, and checks duplicate cards and bad cards.
*/
void read_card(int hand[NUM_CARDS][2]) {

	// var init;
	char ch, rank_ch, suit_ch;
	bool bad_card;


	// init all array elements to 0
	for (int card = 0; card < NUM_CARDS; card++) {

		for (int i = 0; i < 2; i++) {
			hand[card][i] = 0;
		}
	}
	

	// card read logic
	for (int card = 0; card < NUM_CARDS;) {
		bad_card = false;

		printf("Enter a card: ");

		rank_ch = getchar();
		// switch logic for rank
		switch (rank_ch) {
			case '0': 
				exit(EXIT_SUCCESS);
			case '2': hand[card][RANK] = 2;
				break;
			case '3': hand[card][RANK] = 3;
				break;
			case '4': hand[card][RANK] = 4;
				break;
			case '5': hand[card][RANK] = 5;
				break;
			case '6': hand[card][RANK] = 6;
				break;
			case '7': hand[card][RANK] = 7;
				break;
			case '8': hand[card][RANK] = 8;
				break;
			case '9': hand[card][RANK] = 9;
				break;
			case 't':
			case 'T': hand[card][RANK] = 10;
				break;
			case 'j':
			case 'J': hand[card][RANK] = 11;
				break;
			case 'q':
			case 'Q': hand[card][RANK] = 12;
				break;
			case 'k':
			case 'K': hand[card][RANK] = 13;
				break;
			case 'a':
			case 'A': hand[card][RANK] = 14;
				break;
			default:
				bad_card = true;
				break;
		}

		suit_ch = getchar();
		// switch logic for suit
		switch (suit_ch) {
			case 'c':
			case 'C': hand[card][SUIT] = 0;
				break;
			case 'd':
			case 'D': hand[card][SUIT] = 1;
				break;
			case 'h':
			case 'H': hand[card][SUIT] = 2;
				break;
			case 's':
			case 'S': hand[card][SUIT] = 3;
				break;
			default:
				bad_card = true;
				break;
		}

		//flush input buffer
		while ((ch = getchar()) != '\n');

		// check if card exists
		bool card_exists = false;
		for (int i = 0; i < card; i++) {

			if (hand[card][RANK] == hand[i][RANK]) {
				if (hand[card][SUIT] == hand[i][SUIT]) {
					card_exists = true;
				}
			}
		}

		if (bad_card) {
			printf("Bad card, Ignored.\n");
		}
		else if (card_exists) {
			printf("Duplicate card, Ignored.\n");
		}
		else {
			card++;
		}
	}
}


// fn02 analyze hand function
/*
	Determines whether the hand contains a straight, a flush, four-of-a-kind, and/or three-of-a-kind;
	determines the number of pairs; stored the results into external variables.
*/
void analyze_hand(int hand[NUM_CARDS][2]) {

	// check for flush
	int same_suit = 1;
	int suit_seen[NUM_SUITS] = { 0 };
	int rank_seen[NUM_RANKS] = { 0 };
	flush = false;
	for (int i = 0; i < NUM_SUITS; i++) {
		suit_seen[i] = 0;
	}

	for (int card = 0; card < NUM_CARDS; card++) {
		
		int suit = hand[card][SUIT];
		suit_seen[suit]++;

		int rank = hand[card][RANK];
		// account for zero-indexing of arrays
		rank_seen[rank - 1]++;
	}
	for (int i = 0; i < NUM_SUITS; i++) {
		if (suit_seen[i] == 5) {
			flush = true;
		}
	}

	// check for royal flush
	/*
		if statement checks if the array elements corresponding to ace, king, queen, jack and 10 have been filled.
		when statement is true, we have a royal flush
	*/
	royal = false;
	if (flush) {
		if (rank_seen[13] && rank_seen[12] && rank_seen[11] && rank_seen[10] && rank_seen[9]) {
			royal = true;
		}
	}


	// check for ace-low straights
	/*
		if hand has ace, two, three, four, five
	*/
	ace_low = false;
	if (rank_seen[13] && rank_seen[1] && rank_seen[2] && rank_seen[3] && rank_seen[4]) {
		ace_low = true;
	}


	// check for straight
	int num_consec = 1;
	straight = false;
	/*
		started iteration from 1 since [card - 1] for 0 would result in array going out of bounds.
	*/
	for (int card = 1; card < NUM_CARDS; card++) {

		int difference = hand[card][RANK] - hand[card - 1][RANK];

		if (abs(difference) == 1) {
			num_consec++;
		}
	}
	if (num_consec == NUM_CARDS) {
		straight = true;
	}


	// check for 4-of-a-kind, 3-of-a-kind and pairs
	pairs = 0;
	four = false;
	three = false;

	// flush all rank_seen elements to zero
	for (int i = 0; i < NUM_RANKS; i++) {
		rank_seen[i] = 0;
	}

	for (int card = 0; card < NUM_CARDS; card++) {
		
		int rank = hand[card][RANK];
		// account for zero-indexing of arrays
		rank_seen[rank - 1]++;

	}
	
	for (int i = 0; i < NUM_RANKS; i++) {
		if (rank_seen[i] == 4) {
			four = true;
		}
		else if (rank_seen[i] == 3) {
			three = true;
		}
		else if (rank_seen[i] == 2) {
			pairs++;
		}
	}
}


// fn03 print result function
/*
	Notifies the user of the result by using external variables set analyze hand.
*/
void print_result(void) {
	if (royal) {
		printf("Royal flush");
	}
	else if (straight && flush) {
		printf("Straight flush");
	}
	if (ace_low) {
		printf("Ace low");
	}
	else if (four) {
		printf("Four-of-a-kind");
	}
	else if (three && pairs == 1) {
		printf("Full house");
	}
	else if (flush) {
		printf("Flush");
	}
	else if (straight) {
		printf("Straight");
	}
	else if (three) {
		printf("Three-of-kind");
	}
	else if (pairs == 2) {
		printf("Two pairs");
	}
	else if (pairs == 1) {
		printf("Pair");
	}
	else {
		printf("High card");
	}

	printf("\n\n");
}