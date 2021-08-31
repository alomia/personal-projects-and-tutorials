/* 01-Introduction to C Programming: fig01_14.c
   prints whether it’s odd or even */
#include <stdio.h>

int main ( void )
{
        printf( "Enter an integer: " );
        
        int number;
        scanf( "%d", &number );

        if ( (number % 2) == 0 )
        {
                printf( "Is even\n" );
        }

        if ( (number % 2) != 0 )
        {
                printf( "Is odd\n" );
        }

        return 0;
}
