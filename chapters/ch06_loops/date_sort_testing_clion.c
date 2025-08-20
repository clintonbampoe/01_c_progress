#include <stdio.h>

int main(){
    // Importable block
    int year = 0, month = 0, day = 0;
    // initializing the earliest criteria so that input is valid
    // initialize variables to the highest possible value
    int earliest_year = 99;         // highest possible value for year (out of 100)
    int earliest_month = 12;        // highest possible value for month (out of 12)
    int earliest_day = 31;          // highest possible value for day (out of 31)
    while (1){
        // take input for the date
        printf("Enter a date: (dd/mm/yy): ");
        scanf("%d / %d / %d", &day, &month, &year);

        // terminate program if date is entered in the format 0/0/0 before it puts that into the earliest date
        if(year == 0 && month == 0 && day == 0){
            printf("yes!!");
            break;
        }
        // else do the rest of the computation,
        // because the program has no other choice
        else
            // if year is less than the earliest year, year is the earliest year
            // the lesser one comes first

            if (year < earliest_year){
                earliest_year = year;
            }

            // else if year has the same value as earliest year, move on to computate for month

            else if (year == earliest_year)
            {

                // If month is less than the earliest month, month is the earliest month

                if (month < earliest_month)
                {
                    earliest_month = month;
                }
                // else if month has the same value as earliest month, move on to computate for days
                else if (month == earliest_month)
                {
                    // day is less than the earliest day, day is the earliest day
                    if (day <= earliest_day)
                    {
                        earliest_day = day;
                    }

            }
        }
    }
    // printing the output for which of earliest day
    printf("The earliest date is %d/%d/%.2d", earliest_day, earliest_month, earliest_year);
}