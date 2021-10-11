/* 02 - Structured Program Development in C: fig02_17.c
   program that reads in a five-digit integer and determines
   whether or not it’s a palindrome. */
#include <stdio.h>

int main( void )
{
        unsigned int number;
        unsigned int validator;

        unsigned int num1 = 0;
        unsigned int num2 = 0;
        unsigned int num3 = 0;
        unsigned int num4 = 0;
        unsigned int num5 = 0;
        
        printf( "Enter five integers (-1 to end): " );
        scanf( "%d", &number );
        
        while ( number != -1 ) {
                
                validator = 0;

                num1 = number / 10000;
                number %= 10000;

                num2 = number / 1000;
                number %= 1000;

                num3 = number / 100;
                number %= 100;

                num4 = number / 10;
                number %= 10;

                num5 = number / 1;
        
                if ( num1 != num5) {
                        validator++;
                 }

                if ( num2 != num4 ) {
                        validator++;
                }

                printf( "%s\n", validator == 0 ? "Is palindrome" : "Not a palindrome" );

                printf( "\nEnter five integers (-1 to end): " );
                scanf( "%d", &number );
        }

        return 0;
}
