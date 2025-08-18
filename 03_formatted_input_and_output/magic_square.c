// This program allows the user to enter numbers 1 to 16 in any random order, and prints displays the numbers
// in a 4 by 4 arrangement and prints the sum of all the rows, columns and diagonals

#include <stdio.h>

int main(void) {
    int r1c1, r1c2, r1c3, r1c4;
    int r2c1, r2c2, r2c3, r2c4;
    int r3c1, r3c2, r3c3, r3c4;
    int r4c1, r4c2, r4c3, r4c4;

    printf("Enter the numbers 1 to 16 in any random order: \n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&r1c1, &r1c2, &r1c3, &r1c4, &r2c1, &r2c2,
        &r2c3, &r2c4, &r3c1, &r3c2, &r3c3, &r3c4, &r4c1, &r4c2, &r4c3, &r4c4);

    printf("%d\t %d\t %d\t %d\t \n",r1c1, r1c2, r1c3, r1c4);
    printf("%d\t %d\t %d\t %d\t \n",r2c1, r2c2, r2c3, r2c4);
    printf("%d\t %d\t %d\t %d\t \n",r3c1, r3c2, r3c3, r3c4);
    printf("%d\t %d\t %d\t %d\t \n",r4c1, r4c2, r4c3, r4c4);

    // Calculating for row and column sums
    // sums of rows
    int row1, row2, row3, row4;
    row1 = r1c1 + r1c2 + r1c3 + r1c4;
    row2 = r2c1 + r2c2 + r2c3 + r2c4;
    row3 = r3c1 + r3c2 + r3c3 + r3c4;
    row4 = r4c1 + r4c2 + r4c3 + r4c4;

    // Sums of columns
    int col1, col2, col3, col4;
    col1 = r1c1 + r2c1 + r3c1 + r4c1;
    col2 = r1c2 + r2c2 + r3c2 + r4c2;
    col3 = r1c3 + r2c3 + r3c3 + r4c3;
    col4 = r1c4 + r2c4 + r3c4 + r4c4;

    // sum of diagonals
    int diag1, diag2;
    diag1 = r1c1 + r2c2 + r3c3 + r4c4;
    diag2 = r1c4 + r2c3 + r3c2 + r4c1;


    printf("Row sums: %d %d %d %d \n", row1, row2, row3, row4);
    printf("Column sums: %d %d %d %d \n",col1, col2, col3, col4);
    printf("Diagonal sums: %d %d \n", diag1, diag2);
    return 0;
    
}