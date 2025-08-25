#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int rand_amount;
    printf("How many rand? ");
    scanf("%d", &rand_amount);

    srand(time(NULL));
    for (int i = 0; i < rand_amount; i++) {
        // suit
        int suit_number = rand() % 4;

        // rank
        int rank_number = (rand() % 13);

        printf("%d,%d ", rank_number, suit_number);
    }
}