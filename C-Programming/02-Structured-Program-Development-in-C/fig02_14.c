/* 02 - Structured Program Development in C: fig02_06.c
   program that enters a series of 10 non-negative numbers
   and determines and prints the two largest numbers. */
#include <stdio.h>

int main( void )
{
        unsigned int counter = 1;
        unsigned int number;
        unsigned int temp = 0;
        unsigned int largest = 0;
        unsigned int secondLargest = 0;

        while ( counter <= 10 ) {
                
                temp = largest;

                printf( "Enter a number: " );
                scanf( "%d", &number );
                
                if ( number > largest ) {
                        largest = number;
                        secondLargest = temp;
                }
                else {
                        if ( number > secondLargest ) {
                                secondLargest = number;
                        }
                }
                
                printf( "Largest is %d\n", largest );
                printf( "Second largest is %d\n\n", secondLargest );

                counter++;
        }

        return 0;
}
