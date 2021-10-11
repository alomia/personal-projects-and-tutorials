/* 03 - Programi control in c: ex03_18.c
   program that calculates a person's new credit limit. */

#include <stdio.h>

int main(void)
{
        unsigned int accountNumber;
        unsigned int creditLimit;
        unsigned int debt;

        printf("Calculation of credit limits\n\n");

        printf("Enter account number(-1 to end): ");
        scanf("%u", &accountNumber);
        
        while (accountNumber != -1) {

                unsigned int newCreditLimit = 0;
                
                printf("Credit limit (pre-recession): ");
                scanf("%u", &creditLimit);
                
                printf("Current balance(money owed): ");
                scanf("%u", &debt);
                
                newCreditLimit = creditLimit / 2;

                printf("Your new credit limit is %u\n", newCreditLimit);
                
                if (debt > newCreditLimit)
                {
                        printf("Your debt is greater than your new credit limit.\n");
                }
                
                printf("\nEnter account number(-1 to end): ");
                scanf("%u", &accountNumber);
        }

        return 0;
}
