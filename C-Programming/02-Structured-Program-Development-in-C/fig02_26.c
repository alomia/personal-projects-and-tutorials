/* 02 - Structured Program Development in C: fig02_26.c
   This program asks for four numbers to decrypt and then
   displays the decrypted number on the screen. */

/************************************************
 * NOTE: Use program fig02_25.c for encryption. *
 ************************************************/

#include <stdio.h>

int main( void )
{
        unsigned int number;

        printf( "Decipher number (-1 to end): " );
        scanf( "%d", &number );
        
        while ( number != -1 ) {
                
                unsigned int num1 = 0;
                unsigned int num2 = 0;
                unsigned int num3 = 0;
                unsigned int num4 = 0;
                
                num1 = number / 1000;
                number %= 1000;
                num1 = ( num1 + 3 ) % 10;

                num2 = number / 100;
                number %= 100;
                num2 = ( num2 + 3 ) % 10;

                num3 = number / 10;
                number %= 10;
                num3 = ( num3 + 3 ) % 10;

                num4 = number;
                num4 = ( num4 + 3 ) % 10;
                
                printf( "Decrypted number is %d%d%d%d\n", num3, num4, num1, num2);

                printf( "\nDecipher number (-1 to end): " );
                scanf( "%d", &number );

        }

        return 0;
}
