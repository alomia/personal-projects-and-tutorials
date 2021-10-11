/* 02 - Structured Program Development in C: fig02_07.c
   Interest Calculator - calculate and display the simple
   interest for each loan. */
#include <stdio.h>

int main( void )
{
        float principal;
        float rate;
        float days;
        float interest;
        
        printf( "Enter loan principal (-1 to end): " );
        scanf( "%f", &principal );

        while ( principal != -1 ) {
                
                printf( "Enter interest rate: " );
                scanf( "%f", &rate );

                printf( "Enter term of the loan in days: " );
                scanf( "%f", &days );
                
                interest = principal * rate * days / 365;

                printf( "The interest charge is $%.2f\n", interest );

                printf( "\nEnter loan principal (-1 to end): " );
                scanf( "%f", &principal );
        }

        return 0;
}
