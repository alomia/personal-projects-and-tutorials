// Chapter 3 - Structured Program Development in C
// Exercise 3.17 - Credit-Limit Calculator
#include <stdio.h>

int main(void)
{
    int account = 0;
    float beginning = 0, newBalance = 0, charges = 0, credits = 0, limit = 0;

    printf("%s ", "Enter account number (-1 to end):");
    scanf("%d", &account);

    while (account != -1)
    {
        printf("%s ", "Enter beginning balance:");
        scanf("%f", &beginning);

        printf("%s ", "Enter total charges:");
        scanf("%f", &charges);

        printf("%s ", "Enter total credits:");
        scanf("%f", &credits);

        printf("%s ", "Enter credit limit:");
        scanf("%f", &limit);

        newBalance = beginning + charges - credits;

        if (newBalance > limit)
        {
            printf("%s%9d\n", "Account:", account);
            printf("%s%8.2f\n", "Credit limit:", limit);
            printf("%s%13.2f\n", "Balance:", newBalance);
            puts("Credit Limit Exceeded.");
        }

        printf("\n%s ", "Enter account number (-1 to end):");
        scanf("%d", &account);
    }
}