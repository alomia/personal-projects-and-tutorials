/* 02 - Structured Program Development in C: fig02_08.c
   Salary Calculator - determine the gross salary of each employee,
   if you work more than 40 hours, you will be paid one and a half hours for each extra hour. */
#include <stdio.h>

int main( void )
{
        unsigned int hours;
        unsigned int counter;
        float hourlyRate;
        float salary;

        printf( "Enter # of hours worked (-1 to end): " );
        scanf( "%d", &hours );

        while ( hours != -1 ) {

                counter = 1;
                salary = 0; 

                printf( "Enter hourly rate of the worker ($00.00): " );
                scanf( "%f", &hourlyRate );
                
                while ( counter <= hours ) {

                        if ( counter > 40 ) {
                                salary += hourlyRate + ( hourlyRate / 2 );
                        }
                        else {
                                salary += hourlyRate;
                        }

                        counter++;
                }

                printf( "Salary is $%.2f\n", salary );
                
                printf( "\nEnter # of hours worked (-1 to end): " );
                scanf( "%d", &hours );
        }

        return 0;
}
