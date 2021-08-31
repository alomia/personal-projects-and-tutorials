/* 01-Introduction to C Programming: fig01_16.c
   Checkerboard Pattern of Asterisksi */
#include <stdio.h>

int main( void )
{
        /* a) - Visualization of the design by means of eight printf instructions */
        printf( "* * * * * * * *\n" );
        printf( " * * * * * * * *\n" );
        printf( "* * * * * * * *\n" );
        printf( " * * * * * * * *\n" );
        printf( "* * * * * * * *\n" );
        printf( " * * * * * * * *\n" );
        printf( "* * * * * * * *\n" );
        printf( " * * * * * * * *\n" );
        
        printf("\n\n");
        
        /* b) - Visualization of the design by means of two printf instructions */
        printf( "* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n" );
        printf( "* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n" );

        return 0;
}
