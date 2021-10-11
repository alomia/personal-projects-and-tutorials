/* 02 - Structured Program Development in C: fig02_05.c
   Credit-Limit Calculator - determine if a department store
   customer exceeds the credit limit on his or her account. */
#include <stdio.h>

int main( void )
{
        unsigned int accountNumber;

        float initialBalance;
        float newBalance;
        float changes;
        float credits;
        float creditLimit;
       
        printf( "Enter account number (-1 to end): " );
        scanf( "%d", &accountNumber );

        while (accountNumber != -1) {

                printf( "Enter beginning balance: " );
                scanf( "%f", &initialBalance );

                printf( "Enter total charges: " );
                scanf( "%f", &changes );

                printf( "Enter total credits: " );
                scanf( "%f", &credits );

                printf( "Enter credit limit: " );
                scanf( "%f", &creditLimit );

                newBalance = ( initialBalance + changes - credits );

                if ( newBalance > creditLimit ) {
                        printf( "Account:\t%d\n", accountNumber );
                        printf( "Credit limit:\t%.2f\n", creditLimit );
                        printf( "Balance:\t%.2f\n", newBalance );
                        printf( "Credit Limit Exceeded.\n" );
                }
                 
                printf( "\nEnter account number (-1 to end): " );
                scanf( "%d", &accountNumber );
        }

        return 0;
}
