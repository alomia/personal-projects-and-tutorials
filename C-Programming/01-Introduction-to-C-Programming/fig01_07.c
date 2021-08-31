/* 01-Introduction to C Programming: fig01_07.c
   prints the sum, product, difference, quotient and
   remainder of the two numbers. */
#include <stdio.h>

int main( void )
{
        printf( "Enter two different integers: " );

        int num1, num2;
        scanf( "%d%d", &num1, &num2 );
        
        int sum = num1 + num2;
        printf( "Sum is %d\n", sum );

        int product = num1 * num2;
        printf( "Product is %d\n", product );

        int difference = num1 - num2;
        printf( "Difference is %d\n", difference );

        int quotient = num1 / num2;
        printf( "Quotient is %d\n", quotient );

        int remainder = num1 % num2;
        printf( "Remainder is %d\n", remainder );
        
        return 0;
}
