
#include <stdio.h>

int main() {
    int cmd;
    float credit = 0.0f, debit = 0.0f, balance = 0.0f;


    for (;;) {
        printf("Enter command: ");
        scanf("%d", &cmd);
        switch (cmd) {
            case 0:
                balance = 0.0f;
                continue;
                break;
            case 1:
                printf("Enter amount of credit: ");
                scanf("%f", &credit);
                balance += credit;
                break;
            case 2:
                printf("Enter amount of debit: ");
                scanf("%f", &debit);
                balance -= debit;
                break;
            case 3:
                printf("Current balance: %.2f\n", balance);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid command!\n");
                printf("*** ACME checkbook balancing program ***\n");
                printf("Commands: 0=clear\t 1=credit\t 2=debit\t 3=balance\t 4=exit \n\n");
        }
    }
}