/* 02 - Structured Program Development in C: fig02_21.c
   program that reads an integer less than or equal to
   five and determines how many digits of the integer are sevens. */
#include <stdio.h>

int main( void )
{
        unsigned int number; 
        
        printf( "Enter an integer (-1 to end): " );
        scanf( "%d", &number );

        while ( number != -1 ) {
                
                unsigned int digit = 0;
                unsigned int counter = 1;
                unsigned int digitCounter = 0;

                while ( counter <= 5) {
                
                        digit = number % 10;
                
                        if ( digit == 7 ) {
                                digitCounter++;
                        }

                        number /= 10;
                        counter++;
                }
                
                printf( "its integer contains %d digits 7.\n", digitCounter );

                printf( "\nEnter an integer (-1 to end): " );
                scanf( "%d", &number );
        }

        return 0;
}
