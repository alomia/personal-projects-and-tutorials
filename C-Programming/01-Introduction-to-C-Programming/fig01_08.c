/* 01-Introduction to C Programming: fig01_08.c
   prints the numbers 1 to 4 on the same line. */
#include <stdio.h>

int main( void )
{
        /* a) - Using one printf statement with no conversion specifiers. */
        printf( "1 2 3 4\n" );

        /* b) - Using one printf statement with four conversion specifiers. */
        printf( "%d %d %d %d\n", 1, 2, 3, 4 );

        /* c) - Using four printf statements.*/
        printf( "1 " );
        printf( "2 " );
        printf( "3 " );
        printf( "4\n" );
        
        return 0;
}
