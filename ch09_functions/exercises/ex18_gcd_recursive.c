#include <stdio.h>
// fn declaration
int gcd(int, int);

// fn00 main
int main(void) {
    // var init
    int num1 = 0;
    int num2 = 0;
    printf("Enter 2 numbers for gcd: (num1, num2): (");
    scanf("%d,%d", &num1, &num2);

    printf("GCD = %d", gcd(num1, num2));
}

// fn01 gcd
int gcd(int m, int n) {
    int temp = 0;
    if (n == 0) {
        return m;
    }
    temp = m % n;
    gcd(n , temp);
}