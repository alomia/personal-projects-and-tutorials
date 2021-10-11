/* 02 - Structured Program Development in C: fig02_27.c
   reads a positive integer calculates and displays its factorial. */
#include <stdio.h>

int main( void )
{
        unsigned int number;

        printf( "Enter integer (-1 to end): " );
        scanf( "%d", &number );

        while ( number != -1 ) {
                
                unsigned int factorial = 1;

                while ( number >= 1 ) {
                
                        factorial *= number;
                        number--;
                }

                printf( "Factorial is %d\n", factorial );

                printf( "\nEnter integer (-1 to end): " );
                scanf( "%d", &number );
        }

        return 0;
}
