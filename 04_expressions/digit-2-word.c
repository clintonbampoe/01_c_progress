#include <stdio.h>

int main() {
    int number;
    printf("enter a number between 0 and 99: ");
    scanf("%d", &number);

    // --- a solid input check right at the start ---
    if (number < 0 || number > 99) {
        printf("INVALID INPUT!!\n");
        return 1; // exit with an error code
    }

    printf("You entered the number ");

    if (number >= 10 && number <= 19) {
        // your logic for teens was good, so we keep it
        switch (number) {
            case 10:    printf("ten"); break;
            case 11:    printf("eleven"); break;
            case 12:    printf("twelve"); break;
            case 13:    printf("thirteen"); break;
            case 14:    printf("fourteen"); break;
            case 15:    printf("fifteen"); break;
            case 16:    printf("sixteen"); break;
            case 17:    printf("seventeen"); break;
            case 18:    printf("eighteen"); break;
            case 19:    printf("nineteen"); break;
        }
    } else {
        // this block now handles 0-9 and 20-99
        int ten = number / 10;
        int one = number % 10;

        switch (ten) {
            // we can even add case 0 and 1 for single digits
            case 0:                                 break; // for nums 0-9, do nothing here
            case 2:     printf("twenty");           break;
            case 3:     printf("thirty");           break;
            case 4:     printf("forty");            break;
            case 5:     printf("fifty");            break;
            case 6:     printf("sixty");            break;
            case 7:     printf("seventy");          break;
            case 8:     printf("eighty");           break;
            case 9:     printf("ninety");           break;
        }

        // --- here's the real fix ---
        // only print the hyphen if it's a number like 21, 35, etc.
        if (ten > 1 && one != 0) {
            printf("-");
        }

        switch (one) {
            case 0:
                // Special case for the number 0
                if (number == 0) {
                    printf("zero");
                }
                break; // for 10, 20, 30... do nothing
            case 1:    printf("one");     break;
            case 2:    printf("two");     break;
            case 3:    printf("three");   break;
            case 4:    printf("four");    break;
            case 5:    printf("five");    break;
            case 6:    printf("six");     break;
            case 7:    printf("seven");   break;
            case 8:    printf("eight");   break;
            case 9:    printf("nine");    break;
        }
    }

    printf("\n"); // for clean output
    return 0;
}