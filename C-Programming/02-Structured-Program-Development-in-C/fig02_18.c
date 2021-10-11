/* 02 - Structured Program Development in C: fig02_18.c
   program converts a binary number into a decimal number*/

/**************************************************
 * WARNING: this program only converts binaries   *
 * with a length less than or equal to 10 digits. *
 **************************************************/

#include <stdio.h>

int main( void )
{
        unsigned int binary;
        unsigned int number;
        
        printf( "Enter binary number (-1 to end): " );
        scanf( "%d", &binary );

        while ( binary != -1 ) {
                
                unsigned int pow = 1;
                unsigned int decimal = 1;
                unsigned int counter = 1; 

                while ( counter <= 10 ) {

                        number = binary % 10;

                        if ( number == 1 ) {
                                decimal += pow;
                        }

                        pow *= 2;
                        counter++;
                        binary /= 10;
                }
                
                printf( "Decimal number is %d\n", decimal );

                printf( "\nEnter binary number (-1 to end): " );
                scanf( "%d", &binary );
        }

        return 0;
}
