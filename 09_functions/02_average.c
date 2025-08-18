#include <stdio.h>

// 00_declare function
double average(double a, double b) ;
int main(void) {
    // var init
    double x = 0, y = 0, z = 0;

    printf("Enter three numbers: ");
    scanf("%lf%lf%lf", &x, &y, &z);

    printf("Average of %g and %g is %g\n", x, y, average(x,y));
    printf("Average of %g and %g is %g\n", y, z, average(y ,z));
    printf("Average of %g and %g is %g\n", x, z, average(x ,z));

    return 0;
}

double average(double a, double b) {
    return (a + b) / 2;
}