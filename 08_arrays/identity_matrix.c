// CHAPTER 8, ARRAYS
// MULTI-DIMENSIONAL ARRAYS (MATRICES)
// Identity matrix
#include <stdio.h>
#define N 10

int main(void) {
    double ident[N][N];

    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            if (row == col) {
                ident[row][col] = 1.0;
            }
            else
                ident[row][col] = 0.0;
        }
    }
    // end
    return 0;
}