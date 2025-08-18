#include <stdio.h>
#include <ctype.h>

// defining departure times as constants
const int D_TIME1 = 480;        // departure at 8:00 AM
const int D_TIME2 = 583;        // departure at 9:43 AM
const int D_TIME3 = 679;        // departure at 11:19 AM
const int D_TIME4 = 767;        // departure at 12:47 PM
const int D_TIME5 = 840;        // departure at 2:00 PM
const int D_TIME6 = 945;        // departure at 3:45 PM
const int D_TIME7 = 1140;       // departure at 7:00 PM
const int D_TIME8 = 1305;       // departure at 9:45 PM

int main(void) {
    // taking input for 12 hour time
    int hours, minutes, t = 0;
    char meridian;
    printf("Enter 12-hour time: ");
    scanf("%d : %2d", &hours, &minutes);
    scanf(" %c", &meridian);

    if (toupper(meridian) == 'A' && hours == 12) {  // at 12 AM (0:00) hours is zero
        t = minutes;
    }
    else if (toupper(meridian) == 'A') {
        t = (hours * 60) + minutes;
    }
    else if (toupper(meridian) == 'P' && hours == 12) {     // exception for 12 PM
        t = (12 * 60) + minutes;
    }
    else if (toupper(meridian) == 'P') {
        t = ((hours + 12) * 60) + minutes;
    }

    printf("Closest departure time is ");
    // in calculating, we are using midpoints between the times to get the closest times before and after
    if (t < (D_TIME1 + D_TIME2) / 2) {
        printf("8:00 a.m., arriving at 10:16 a.m.");
    }
    else if (t < (D_TIME2 + D_TIME3) / 2) {
        printf("9:43 a.m., arriving at 11:52 a.m. ");
    }
    else if (t < (D_TIME3 + D_TIME4) / 2) {
        printf("11:19 a.m., arriving at 1:31 p.m. ");
    }
    else if (t < (D_TIME4 + D_TIME5) / 2) {
        printf("12:47 p.m., arriving at 3:00 p.m. ");
    }
    else if (t < (D_TIME5 + D_TIME6) / 2) {
        printf("2:00 p.m., arriving at 4:08 p.m. ");
    }
    else if (t < (D_TIME6 + D_TIME7) / 2) {
        printf("3:45 p.m., arriving at 5:55 p.m. ");
    }
    else if (t < (D_TIME7 + D_TIME8) / 2) {
        printf("7:00 p.m., arriving at 9:20 p.m. ");
    }
    else {
        printf("9:45 p.m., arriving at 11:58 p.m. ");
    }

    // end
    return 0;
}

