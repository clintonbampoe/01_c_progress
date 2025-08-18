#include <stdio.h>

#define STNDWT 166 // Corrected macro definition

int main(void) {
    int height = 1,
    length = 1,
    width = 1,
    weight;

    printf("Enter the height: ");
    scanf("%d", &height); // Corrected scanf

    printf("Enter the length: ");
    scanf("%d", &length); // Corrected scanf

    printf("Enter the width: ");
    scanf("%d", &width); // Corrected scanf

    weight = ((height * length * width) + (STNDWT - 1)) / 166;
    printf("Weight: %d\n", weight); // Added newline for better output formatting

    return 0; // Added return statement
}