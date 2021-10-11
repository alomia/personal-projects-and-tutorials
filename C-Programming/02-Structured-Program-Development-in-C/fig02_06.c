/* 02 - Structured Program Development in C: fig02_06.c
   Sales-Commission Calculator: Salespeople receive $200
   per week plus 9% of their total sales for the week. */
#include <stdio.h>

int main( void )
{
        float sales;
        float salary;

        printf( "Enter sales in dollars (-1 to end): " );
        scanf( "%f", &sales );

        while ( sales != -1 ) {

                salary = (200 + ((9 * sales) / 100 ));
                printf( "Salary is: $%.2f\n", salary );

                printf( "\nEnter sales in dollars (-1 to end): " );
                scanf ( "%f", &sales );
        }
        
        return 0;
}
