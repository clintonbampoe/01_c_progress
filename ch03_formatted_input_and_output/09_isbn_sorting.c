// This program breaks down an ISBN into its various parts

#include <stdio.h>

int main(void) {
    int gsi_prefix, group_id, publisher_code, item_num, check_digit;

    // Taking input for the number
    printf("Enter ISBN: ");

    //matching them into respective pointers
    scanf("%d - %d - %d - %d -%d", &gsi_prefix, &group_id, &publisher_code, &item_num, &check_digit);

    printf("GSI Prefix: %d \n", gsi_prefix);
    printf("Group Identifier: %d \n", group_id);
    printf("Publisher Code: %d \n", publisher_code);
    printf("Item Number: %d \n", item_num);
    printf("Check digit: %d \n", check_digit);


}