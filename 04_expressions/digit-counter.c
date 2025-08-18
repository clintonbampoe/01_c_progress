#include <stdio.h>

int main(void) {
    // declaring the main variable
    int i;

    //Taking input for the variable i
    printf("Enter a number: ");
    scanf("%d", &i);

    // The main if statement
    // This is written with the assumption that the highest num of digits is 3
    //
    // if variable i is less than 9, print this...
    // if variable i is from 10 to 99 print that...
    // else print that...


    if (i < 9)
        printf("The number has 1 digit");
    else if (i > 9 && i < 99 )
        printf("The number has 2 digits");
    else if (i > 99 && i < 999 )
        printf("The number has 3 digits");
}