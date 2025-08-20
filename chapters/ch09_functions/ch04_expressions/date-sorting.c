#include <stdio.h>
#include <stdbool.h>

int main() {
    int d1, m1, y1, d2, m2, y2;
    printf("Enter the first date(dd/mm/yy): ");
    scanf("%d/%d/%d", &d1, &m1, &y1);

    printf("Enter the second date(dd/mm/yy): ");
    scanf("%d/%d/%d", &d2, &m2, &y2);


    bool date_one_comes_first = false;
    if (y1 < y2) {
        date_one_comes_first = true;
    }
    else if (y1 == y2) {
        if (m1 < m2) {
            date_one_comes_first = true;
        }
        else if (m1 == m2) {
            if (d1 < d2) {
                date_one_comes_first = true;
            }
        }
    }
    if (y1 == y2 && m1 == m2 && d1 == d2) {
        printf("The dates are the same. ");
    }
    else if (date_one_comes_first == true) {
        printf("%d/%d/%.2d", d1, m1, y1);
        printf(" is earlier than ");
        printf("%d/%d/%.2d\n", d2, m2, y2);
    }
    else {
        printf("%d/%d/%.2d", d2, m2, y2);
        printf(" is earlier than ");
        printf("%d/%d/%.2d\n", d1, m1, y1);
    }
    return 0;
}