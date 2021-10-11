/* 02 - Structured Program Development in C: fig02_20.c
   program that prints 100 asterisks, one at a time.
   After every tenth asterisk, the program must print
   a newline character. */
#include <stdio.h>

int main( void )
{
        unsigned int counter = 1;

        while ( counter <= 100 ) {

                printf( "*");

                if ( counter % 10 == 0 ) {
                        printf( "\n" );
                }

                counter++;
        }

        return 0;
}
