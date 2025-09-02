#include <stdio.h>
#include <ctype.h>

int main(void) {
    // taking input for 12 hour time
    int hrs, mins, meridian;
    printf("Enter 12-hour time: ");
    int sf_return_value = scanf("%d:%.2d %d", &hrs, &mins, &meridian);

    // T: time after midnight (minutes)
    int t = (12 * hrs) + mins;

    printf("Closest departure time is ");
    if (t < 531.5) {
        printf("8:00 a.m., arriving at 10:16 a.m.");
    }
    else if (t < 631) {
        printf("9:43 a.m., arriving at 11:52 a.m. ");
    }
    else if (t < 723) {
        printf("11:19 a.m., arriving at 1:31 p.m. ");
    }
    else if (t < 803.5) {
        printf("12:47 p.m., arriving at 3:00 p.m. ");
    }
    else if (t < 892.5) {
        printf("2:00 p.m., arriving at 4:08 p.m. ");
    }
    else if (t < 1042.5) {
        printf("3:45 p.m., arriving at 5:55 p.m. ");
    }
    else if (t < 1222.5) {
        printf("7:00 p.m., arriving at 9:20 p.m. ");
    }
    else {
        printf("9:45 p.m., arriving at 11:58 p.m. ");
    }
    return 0;
}

