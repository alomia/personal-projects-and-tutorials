/* 01-Introduction to C Programming: fig01_09.c
   get two numbers from the user and determine which of the two numbers
   is greater, in case the numbers are equal display the following message
   "These numbers are equal". */
#include <stdio.h>

int main( void )
{
        printf( "Enter two integers: " );

        int num1, num2;
        scanf( "%d%d", &num1, &num2 );

        if ( num1 > num2 )
        {
                printf( "%d is larger.\n", num1 );
        }

        if ( num2 > num1 )
        {
                printf( "%d is larger.\n", num2 );
        }

        if ( num1 == num2 )
        {
                printf( "These numbers are equal.\n" );
        }

        return 0;
}
