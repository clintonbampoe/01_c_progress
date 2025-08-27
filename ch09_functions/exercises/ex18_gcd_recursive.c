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
    if (n == 0) {
        return m;
    }
    return gcd(n , m % n);
}