/* 01-Introduction to C Programming: fig01_18.c
   Separating Digits in an Integer
   -example-
   1 - input obtained by the user --> 42139
   2 - division of the digit obtained -->  4.2139
   3 - obtain the remainder of the division --> 2139 */
#include <stdio.h>

int main( void )
{
        printf( "Enter five integers: " );
        
        int digits;
        scanf( "%d", &digits );
        
        printf( "%d ", digits / 10000 );
        digits = digits % 10000;
        
        printf( "%d ", digits / 1000 );
        digits = digits % 1000;

        printf( "%d ", digits / 100 );
        digits = digits % 100;

        printf( "%d ", digits / 10 );
        digits = digits % 10;

        printf( "%d\n", digits / 1 );

        return 0;
}
