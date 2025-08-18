#include <stdio.h>

int main(void) {
    float amount, interest_rate, total_amt, monthly_pay, b_aft_fp, b_aft_sp, b_aft_tp;
    int years;

    printf("Enter the amount of loan: ");
    // Issue 1: Incorrect format specifier for scanf
    // scanf("%.2f", &amount); // "%.2f" is for printf, not scanf
    scanf("%f", &amount); // Corrected

    printf("Enter Interest rate: ");
    // Issue 2: Newline character in scanf format string can cause issues
    // scanf("%f\n", &interest_rate);
    scanf("%f", &interest_rate); // Corrected

    printf("Enter time for payment (in years): ");
    // Issue 2: Newline character in scanf format string
    // scanf("%d \n", &years);
    scanf("%d", &years); // Corrected

    // Issue 3: Incorrect interest calculation for a loan
    // This calculates simple interest for one period and adds it.
    // It doesn't account for compounding or the loan term (years) correctly.
    // For example, if interest_rate is annual, it's only applied once, not per year.
    total_amt = amount * (1 + interest_rate);
    printf("Total Amount: %.2f \n", total_amt);

    // Issue 4: Monthly payment calculation based on a flawed total_amt.
    // This is a simple average, not how loan amortization typically works.
    // Real loan payments factor in interest accruing on the declining principal.
    monthly_pay = total_amt / (years * 12);
    // Issue 5: Typo in printf statement ("monthly 1")
    // printf("You will pay %.2f monthly 1", monthly_pay);
    printf("You will pay %.2f monthly\n", monthly_pay); // Corrected

    // The balance calculations below are arithmetically correct based on the
    // flawed monthly_pay and total_amt, but they won't reflect a real loan.
    b_aft_fp = total_amt - monthly_pay;
    printf("Balance After First Payment: %.2f \n", b_aft_fp);
    b_aft_sp = b_aft_fp - monthly_pay;
    printf("Balance After Second Payment: %.2f \n", b_aft_sp);
    b_aft_tp = b_aft_sp - monthly_pay;
    printf("Balance After Third Payment: %.2f \n", b_aft_tp);
    return 0;
}