/*
 * CompoundValue.c
 * Exercise 3: Financial Application – Compound Savings Value
 *
 * Prompts the user for a monthly savings amount, then calculates and
 * displays the account balance after each of the first six months,
 * assuming an annual interest rate of 5% (monthly rate = 0.05 / 12).
 *
 * Formula applied each month:
 *   account_value = (account_value + monthly_saving) * (1 + monthly_rate)
 */

#include <stdio.h>

int main(void)
{
    const double ANNUAL_INTEREST_RATE = 0.05;
    const double MONTHLY_RATE         = ANNUAL_INTEREST_RATE / 12.0;
    const int    MONTHS               = 6;

    double monthly_saving = 0.0;
    double account_value  = 0.0;

    printf("Enter the monthly saving amount ($): ");

    if (scanf("%lf", &monthly_saving) != 1 || monthly_saving < 0.0)
    {
        fprintf(stderr,
                "Error: Invalid input. Please enter a non-negative numeric value.\n");
        return 1;
    }

    printf("\nAnnual interest rate : %.2f%%\n", ANNUAL_INTEREST_RATE * 100.0);
    printf("Monthly interest rate: %.5f\n\n", MONTHLY_RATE);
    printf("%-8s  %-15s\n", "Month", "Account Value");
    printf("--------  ---------------\n");

    int month;
    for (month = 1; month <= MONTHS; month++)
    {
        account_value = (account_value + monthly_saving) * (1.0 + MONTHLY_RATE);
        printf("%-8d  $%-14.2f\n", month, account_value);
    }

    printf("\nAfter %d months, your account value is: $%.2f\n",
           MONTHS, account_value);

    return 0;
}