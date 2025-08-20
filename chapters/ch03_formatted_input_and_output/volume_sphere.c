// All metrics are in meters

#include <stdio.h>

#define PI 3.142
int main(void) {
    int radius;
    float volume;

    printf("Enter the radius: ");
    scanf("%d", &radius);

    volume = ((4.0f/3.0f) * PI * (radius * radius * radius));
    printf("%.2f", volume);
    return 0;
}