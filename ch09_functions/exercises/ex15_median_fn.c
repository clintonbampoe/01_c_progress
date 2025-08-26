#include <stdio.h>

// fn declaration
double median(double, double, double);

// fn00 main
int main(void) {
    double x = 0;
    double y = 0;
    double z = 0;

    printf("Enter three numbers (x, y, z) : ");
    scanf("%lf,%lf,%lf", &x, &y, &z);

    printf("Median = %.1lf", median(x, y, z));

}

// fn01 median function
double median(double x, double y, double z) {
    double med = 0;
    if (x <= y) {
        if (y <= z) {
            med = y;
        }
        else if (x <= z) {
            med = z;
        }
        else
            med = x;
    }
    else if (z <= y) {
        med = y;
    }
    else if (x <= z) {
        med = x;
    }
    else
        med = z;
    return med;
}