// this program prints info about a product in a specific format

#include <stdio.h>

int main(void) {
    int item;
    float unit_price;
    int day, month, year;

    //Taking input from the user
    printf("Enter the item number: ");
    scanf("%d", &item);

    printf("Enter unit price: ", unit_price);
    scanf("%f", &unit_price);

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &month, &day, &year );

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");

    printf("%-d\t\t", item);
    printf("$ %4.2f\t\t", unit_price);
    printf("%d/%d/%d", month, day, year);

    return 0;

}