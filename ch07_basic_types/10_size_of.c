#include <stdio.h>
int main() {

    printf("Int type is %zu byte(s) (%zu bits)\n", sizeof(int), sizeof(int) * 8);
    printf("Short type is %zu byte(s) (%zu bits)\n", sizeof(short), sizeof(short) * 8);
    printf("long type is %zu byte(s) (%zu bits)\n", sizeof(long), sizeof(long) * 8);
    printf("float type is %zu byte(s) (%zu bits)\n", sizeof(float), sizeof(float) * 8);
    printf("double type is %zu byte(s) (%zu bits)\n", sizeof(double), sizeof(double) * 8);
    printf("long double is %zu byte(s) (%zu bits)\n", sizeof(long double), sizeof(long double) * 8);
    return 0;
}