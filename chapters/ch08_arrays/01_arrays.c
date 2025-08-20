#include <stdio.h>

#define ROW_WIDTH 5
#define COL_WIDTH 5
int main(void) {
    // variable init
    int col_total[COL_WIDTH] = {0};
    int row_total[ROW_WIDTH] = {0};
    int array[ROW_WIDTH][COL_WIDTH] = {0};

    // input
    for (int row = 0; row < ROW_WIDTH; row++) {
        printf("Enter row %d: ", row + 1);
        for (int col = 0; col < COL_WIDTH; col++) {
            scanf("%d", &array[row][col]);
        }
    }

    // summing rows
    for (int row = 0; row < ROW_WIDTH; row++) {
        for (int col = 0; col < COL_WIDTH; col++) {
            row_total[row] += array[row][col];
        }
    }

    // summing columns
    for (int col = 0; col < COL_WIDTH; col++) {
        for (int row = 0; row < ROW_WIDTH; row++) {
            col_total[col] += array[row][col];
        }
    }

    // print row total
    printf("Row totals: ");
    for (int row = 0; row < ROW_WIDTH; row++) {
        printf("%d ", row_total[row]);
    }

    // printing column total
    printf("\nColumn totals: ");
    for (int col = 0; col < COL_WIDTH; col++) {
        printf("%d ", col_total[col]);
    }
}