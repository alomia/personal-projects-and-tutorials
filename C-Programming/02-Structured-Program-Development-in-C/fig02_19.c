/* 02 - Structured Program Development in C: fig02_19.c
   How can you determine how fast your own computer really operates?
   Use your clock to time every 100 million iterations of the loop. */
#include <stdio.h>

int main( void )
{
        unsigned int counter = 1;

        while ( counter <= 1000000000 ) {
                
                if ( counter % 100000000 == 0 ) {
                        printf( "%d\n", counter );
                }

                counter++;
        }

        return 0;
}
