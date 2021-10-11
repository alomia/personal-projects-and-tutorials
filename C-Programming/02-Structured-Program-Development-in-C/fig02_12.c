/* 02 - Structured Program Development in C: fig02_12.c
   program that uses a loop to print a table of values. */
#include <stdio.h>

int main( void )
{
        unsigned int counter = 1;

        printf( "\40N\t10*N\t100*N\t1000*N\n\n" );

        while ( counter <= 10 ) {
                
                printf( "\40%d\t%d\t%d\t%d\n", counter, counter * 10, counter * 100, counter * 1000 );
                
                counter++;
        }

        return 0;
}
