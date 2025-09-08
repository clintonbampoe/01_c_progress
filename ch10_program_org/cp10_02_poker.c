#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// macro def
#define NUM_CARDS 5
#define NUM_SUITS 4
#define NUM_RANKS 13


// external variables
bool straight, flush, four, three;
int pairs;		// can be 0, 1 or 2


// function declaration
void read_card(int [], int []);
void analyze_hand(int [], int []);
void print_result(void);


// main function
/* 
* main function calls read_card, analyze_hand and print_result repeatedly
*/
int main(void) {
	// var init 
	int num_in_rank[NUM_RANKS];
	int num_in_suit[NUM_SUITS];


	while (true) {
		read_card(num_in_rank, num_in_suit);
		analyze_hand(num_in_rank, num_in_suit);
		print_result();

	}
	return 0;
}


// fn01 read card
/*
	reads cards into external variables, and checks duplicate cards and bad cards.
*/
void read_card(int num_in_rank[],int num_in_suit[]) {

	// var init
	bool card_exists[NUM_RANKS][NUM_SUITS];
	char ch, rank_ch, suit_ch;
	int rank, suit;
	bool bad_card;
	int cards_read = 0;


	// flush all elements in card_exists to false
	for (rank = 0; rank < NUM_RANKS; rank++) {
		for (suit = 0; suit < NUM_SUITS; suit++) {
			card_exists[rank][suit] = false;
		}
	}

	// 
	for (rank = 0; rank < NUM_RANKS; rank++) {
		num_in_rank[rank] = 0;
	}

	for (suit = 0; suit < NUM_SUITS; suit++) {
		num_in_suit[suit] = 0;
	}
	

	// card read logic
	while (cards_read < NUM_CARDS) {
		bad_card = false;

		printf("Enter a card: ");

		rank_ch = getchar();
		// switch logic for rank
		switch (rank_ch) {
			case '0': 
				exit(EXIT_SUCCESS);
			case '2': rank = 0;
				break;
			case '3': rank = 1;
				break;
			case '4': rank = 2;
				break;
			case '5': rank = 3;
				break;
			case '6': rank = 4;
				break;
			case '7': rank = 5;
				break;
			case '8': rank = 6;
				break;
			case '9': rank = 7;
				break;
			case 't':
			case 'T': rank = 8;
				break;
			case 'j':
			case 'J': rank = 9;
				break;
			case 'q':
			case 'Q': rank = 10;
				break;
			case 'k':
			case 'K': rank = 11;
				break;
			case 'a':
			case 'A': rank = 12;
				break;
			default:
				bad_card = true;
				break;
		}

		suit_ch = getchar();
		// switch logic for suit
		switch (suit_ch) {
			case 'c':
			case 'C': suit = 0;
				break;
			case 'd':
			case 'D': suit = 1;
				break;
			case 'h':
			case 'H': suit = 2;
				break;
			case 's':
			case 'S': suit = 3;
				break;
			default:
				bad_card = true;
				break;
		}

		//flush input buffer
		while ((ch = getchar()) != '\n');

		if (bad_card) {
			printf("Bad card, Ignored.\n");
		}
		else if (card_exists[rank][suit]) {
			printf("Duplicate card, Ignored.\n");
		}
		else {
			num_in_rank[rank]++;
			num_in_suit[suit]++;
			card_exists[rank][suit] = true;
			cards_read++;
		}
	}
}


// fn02 analyze hand function
/*
	Determines whether the hand contains a straight, a flush, four-of-a-kind, and/or three-of-a-kind;
	determines the number of pairs; stored the results into external variables.
*/
void analyze_hand(int num_in_rank[], int num_in_suit[]) {
	// var init
	int num_consec = 0;
	int rank, suit;
	straight = false;
	flush = false;
	four = false;
	three = false;
	pairs = false;

	// check for flush
	for (suit = 0; suit < NUM_SUITS; suit++) {
		if (num_in_suit[suit] == NUM_CARDS) {
			flush = true;
		}
	}

	// check for straight
	rank = 0;
	while (num_in_rank[rank] == 0) {
		rank++;
	}
	for (; rank < NUM_RANKS && num_in_rank[rank] > 0; rank++) {
		num_consec++;
	}
	if (num_consec == NUM_CARDS) {
		straight = true;
		return;
	}

	// check for 4-of-a-kind, 3-of-a-kind and pairs
	for (rank = 0; rank < NUM_RANKS; rank++) {
		if (num_in_rank[rank] == 4) {
			four = true;
		}
		if (num_in_rank[rank] == 3) {
			three = true;
		}
		if (num_in_rank[rank] == 2) {
			pairs++;
		}
	}
}


// fn03 print result function
/*
	Notifies the user of the result by using external variables set analyze hand.
*/
void print_result(void) {
	if (straight && flush) {
		printf("Straight flush");
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