#include <stdio.h>

int main() {
    int day, month, year;
    printf("Enter date (dd/mm/yy): ", day, month, year);
    scanf("%d/%d/%d", &day, &month, &year);


    printf("Dated on the %d", day);

    // printing the prefix for the day
    switch (day) {
        case 1: case 21: case 31:
            printf("st");
            break;
        case 2: case 22:
            printf("nd");
            break;
        case 3: case 23:
            printf("rd");
            break;
        default:
            printf("th");
            break;
    }
    printf(" of ");

    // changing the month from digit to word
    switch (month) {
        case 1: printf("January");
            break;
        case 2: printf("February");
            break;
        case 3: printf("March");
            break;
        case 4: printf("April");
            break;
        case 5: printf("June");
            break;
        case 6: printf("July");
            break;
        case 7: printf("August");
            break;
        case 8: printf("September");
            break;
        case 9: printf("October");
            break;
        case 10: printf("November");
            break;
        case 11: printf("December");
            break;
        case 12: printf("December");
            break;
    }
    printf(", 20%.2d.", year);
    return 0;
}