#include <stdio.h>
// enter number in the form (xxx) xxx-xxxx and it prints it back in the form, xxx.xxx.xxxx

int main(void) {
    int country_code, part1, part2;

    printf("Enter phone number: ");
    scanf("(%d) %d - %d", &country_code, &part1, &part2);

    printf("%d.%d.%d", country_code, part1, part2);
    return 0;
}