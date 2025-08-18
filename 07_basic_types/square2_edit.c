/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void) {
    int n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    //
    for (int i = 1; i <= n; i++){
        printf("%10d%10d\n", i, i * i);

        if (i >= 24 && i % 24 == 0) {
            printf("Press Enter to continue...");
            int c;

            // flush leftover line from scanf
            while ((c = getchar()) != '\n' && c != EOF)
                // empty statement
                ;
        }
    }
    return 0;
}