// MYSTERY FN CONVERTS INT FROM DECIMAL TO BINARY
// PB probably means print binary

#include <stdio.h>
// fn declaration
void pb(int);

// fn00 main
int main(void) {
    int samp = 0;
    printf("Enter a number: ");
    scanf("%d", &samp);

    pb(samp);
}

// fn01 mystery function
void pb(int n) {
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}