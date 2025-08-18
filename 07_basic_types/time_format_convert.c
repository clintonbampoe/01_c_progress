#include <ctype.h>
#include <stdio.h>

int main() {
    int hour, minute;
    char meridian;
    printf("Enter a 12-hour time: ");
    scanf("%d : %d", &hour, &minute );
    scanf(" %c", &meridian);

    if (toupper(meridian) == 'A' && hour == 12) {
        hour = 0;
    }
    else if (toupper(meridian) == 'P' && hour == 12) {
        hour = 12;
    }
    else if (toupper(meridian) == 'P') {
        hour += 12;
    }

    // printing output
    printf("Equivalent 24-hour time: %.2d:%.2d", hour, minute);
    // end
    return 0;
}