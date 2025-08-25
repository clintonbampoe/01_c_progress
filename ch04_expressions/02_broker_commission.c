#include <stdio.h>

// this code was later modified to:
// 1.   add number of shares and value per share
// 2.   Add statements that compute the commission charged by a rival broker ($33 plus 3¢ per
//      share for fewer than 2000 shares; $33 plus 2¢ per share for 2000 shares or more).
//      Display the rival’s commission as well as the commission charged by the original broker.

int main() {
    float commission, value, price_per_share, rival_broker_commission;
    float number_of_shares;


    printf("Enter number of shares you want to trade: $ ");
    scanf("%f", &number_of_shares);

    printf("Enter price per share: $ ");
    scanf("%f", &price_per_share);

    value = number_of_shares * price_per_share;
    printf("Amount to be paid: $ %.2f\n", value);

    // Commission rates for Original Broker
    if (value < 2500)
        commission = 30.00f + (value * 0.017f);
    else if (value < 6250)
        commission = 56 + (value * 0.0066f);
    else if (value < 20000)
        commission = 76 + (value * 0.0034f);
    else if (value < 50000)
        commission = 100 + (value * 0.0022f);
    else if (value < 500000)
        commission = 155 + (value * 0.0011f);
    else
        commission = 255 + (value * 0.0009f);

    if (commission < 39.00)
        commission = 39.00f;

    printf("Commission = $ %.2f\n", commission);

    // Computing the commission for rival broker
    if (number_of_shares < 2000) {
        rival_broker_commission = 33.0f + (0.03f * number_of_shares);
        }
    else if (number_of_shares >= 2000) {
        rival_broker_commission = 33.0f + (0.02f * number_of_shares);
    }
    printf("Rival charges: $ %.2f", rival_broker_commission);

    return 0;
}