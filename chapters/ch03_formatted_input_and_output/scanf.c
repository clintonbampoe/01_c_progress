// Understanding how scanf reads input
#include <stdio.h>

int main(void) {
    // Two
    float a, c;
    int b;
    scanf("%f%d%f", &a, &b, &c);

    printf("%f\n", a);
    printf("%d\n", b);
    printf("%f\n", c);
    return 0;

    // One
    float x = .5f;
    int i = 1,j = 1;

    scanf("%d%f%d", &i, &x, &j);

    printf("%d \n", i);
    printf("%f \n", x);
    printf("%d \n", j);
}
