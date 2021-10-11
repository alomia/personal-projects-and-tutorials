/* 02 - Structured Program Development in C: fig02_10.c
   program that uses a loop to print numbers from 1 to 10 on the same line,
   each separated by three blanks.  */
#include <stdio.h>

int main( void )
{
        int counter = 1;

        while ( counter <= 11 ) {

                counter > 10 ? printf( "\n" ) : printf( "%d\40\40\40", counter );
                counter++;
        }

        return 0;
}
