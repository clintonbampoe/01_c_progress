// This program takes time in 24-hour format and converts it to a 12-hour format
#include <stdio.h>

int main() {
    // declaring variables
    // h: 24-hour format      m: minutes      eh: 12-hour format
    int h, m, eh;

    // Taking input for the 24-hour time format
    // Hour and minute are taken separately, colon is the separator

    printf("Enter a 24 hour time: ");
    scanf("%d:%d", &h, &m);

    // The main if statement
    // for times from 00:00 to 11:59
    if (h < 12) {
        printf("The equivalent 12-hour time is: %2d:%02d AM", h, m);
    }
    // for 12 PM conversion
    else if (h == 12) {
        eh = 12;
        printf("The equivalent 12-hour time is: %2d:%02d PM", eh, m);
    }
    // for time after 12 PM
    else if (h > 12 && h < 24){
        eh = h - 12;
        printf("The equivalent 12-hour time is: %2d:%02d PM", eh, m);
    } else {
        printf("Invalid input!");
    }
    return 0;

}