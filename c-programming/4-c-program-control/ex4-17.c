// Chapter 4 - C Program Control
// Exercise 4.17 - Calculating Credit Limits
#include <stdio.h>

int main(void)
{
    unsigned int account_number = 0;
    double credit_limit = 0, current_balance = 0;

    printf("%s", "Account number(-1 to end): ");
    scanf("%u", &account_number);

    while (account_number != -1)
    {
        printf("%s", "Credit limit: ");
        scanf("%lf", &credit_limit);

        printf("%s", "Current balance: ");
        scanf("%lf", &current_balance);

        puts("");

        double new_credit_limit = credit_limit / 2;

        printf("Your new credit limit is $%.2lf", new_credit_limit);
        puts("");

        if (current_balance > new_credit_limit)
        {
            printf("%s", "Current balance exceeds new credit limit.");
            puts("");
        }

        puts("---------------------------------------------+");
        printf("%s", "Account number(-1 to end): ");
        scanf("%d", &account_number);
    }
}
