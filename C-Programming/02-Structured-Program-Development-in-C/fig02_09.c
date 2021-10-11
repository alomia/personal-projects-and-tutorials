/* 02 - Structured Program Development in C: fig02_09.c
   program that demonstrates the difference between predecrementing and postdecrementing */
#include <stdio.h>

int main( void )
{
        int x;

        x = 5;

        printf( "Predecrementing 5: \n" );
        printf( "%d\n", x );
        printf( "%d\n", --x );
        printf( "%d\n", x );

        x = 5;
        
        printf( "Postdecrementing 5: \n" );
        printf( "%d\n", x );
        printf( "%d\n", x-- );
        printf( "%d\n", x );
        
        return 0;
}
