// CHAPTER 8, ARRAYS
// MATRICES

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_OF_SUITS 4
#define NUM_OF_RANKS 13

int main(void) {

    const char suit[NUM_OF_SUITS] = {'c', 'd', 'h', 's'};
    const char rank[NUM_OF_RANKS] = {'a', '2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k'};
    bool card_dealt[NUM_OF_SUITS][NUM_OF_RANKS] = {false};

    int number_of_cards = 0;
    printf("Enter number of cards in hand: ");
    scanf("%d", &number_of_cards);

    srand(time(NULL));
    while (number_of_cards > 0) {
        int suit_num = (rand() % 4);
        int rank_num = (rand() % 13);

        if (card_dealt[suit_num][rank_num] == false) {
            card_dealt[suit_num][rank_num] = true;
            printf("%c%c ", rank[rank_num], suit[suit_num]);
            number_of_cards--;
        }
    }
    printf("\n");

    // end
    return 0;
}