/* 02 - Structured Program Development in C: fig02_11.c
   program that inputs a series of 10 non-negative umbers
   and determines and prints the largest of the numbers. */
#include <stdio.h>

int main( void )
{
        unsigned int counter = 1;
        unsigned int number;
        unsigned int largest = 0;
        
        while ( counter <= 10 ) {

                printf( "Enter a number: " );
                scanf( "%d", &number );

                if ( number > largest ) {
                        largest = number;
                }
                
                printf( "Largest is %d\n\n", largest );

                counter++;
        }

        return 0;
}
