#include <stdio.h>
int day_of_year(int, int, int);

int main(void) {

    // variable init
    int month = 0;
    int day = 0;
    int year = 0;

    printf("Enter date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &month, &day, &year);

    int day_num = day_of_year(month,day,year);
    printf("%d", day_num);
}

int day_of_year(int month, int day, int year) {
    int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;

    // if year is leap year
    if ((year % 4 == 0) || (year % 100 == 0 && year % 400 == 0)) {
        // feb is 29 days
        days_in_month[1] += 1;
    }

    // add all days in months month in date
    // NB: Arrays are zero indexed
    for (int i = 0; i < (month - 1); i++) {
        total_days += days_in_month[i];
    }

    total_days += day;
    return total_days;
}