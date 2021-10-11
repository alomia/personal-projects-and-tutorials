/* 02 - Structured Program Development in C: fig02_25.c
   This program asks for four numbers to encrypt and then
   displays the encrypted number on the screen. */

/************************************************
 * NOTE: Use the program fig02_26.c to decrypt. *
 ************************************************/

#include <stdio.h>

int main( void )
{
        unsigned int number; 

        printf( "Numerical encryption (-1 to end): " );
        scanf( "%d", &number );
        
        while ( number != -1 ) {
                
                unsigned int num1 = 0;
                unsigned int num2 = 0;
                unsigned int num3 = 0;
                unsigned int num4 = 0;
      
                num1 = number / 1000;
                number %= 1000;
                num1 = ( num1 + 7 ) % 10;

                num2 = number / 100;
                number %= 100;
                num2 = ( num2 + 7 ) % 10;

                
                num3 = number / 10;
                number %= 10;
                num3 = ( num3 + 7 ) % 10;

                num4 = number;                
                num4 = ( num4 + 7 ) % 10;

                printf( "Encrypted number is %d%d%d%d\n", num3, num4, num1, num2 );

                printf( "\nNumerical encryption (-1 to end): " );
                scanf( "%d", &number );
        }

        return 0;
}
