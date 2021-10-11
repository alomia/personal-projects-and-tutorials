/* 02 - Structured Program Development in C: fig02_23.c
   Multiples of 2 with an Infinite Loop */
#include <stdio.h>

int main( void )
{
        unsigned int number = 1;

        while ( number > 0 ) {
                
                number *= 2;

                if ( number % 2 == 0 ) {
                        printf( "%d, ", number );
                }
        }

        printf( "\n" );

        return 0;
}
