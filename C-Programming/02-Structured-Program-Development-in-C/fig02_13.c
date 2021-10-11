/* 02 - Structured Program Development in C: fig02_13.c
   program that uses a loop to print a table of values. */
#include <stdio.h>

int main( void )
{
        unsigned int A = 3;
        
        printf( "\40A\tA+2\tA+4\tA+6\n\n" );
        
        while ( A <= 15 ) {

                printf( "\40%d\t%d\t%d\t%d\n", A, A + 2, A + 4,  A + 6 );

                A += 3;
        }

        return 0;
}
