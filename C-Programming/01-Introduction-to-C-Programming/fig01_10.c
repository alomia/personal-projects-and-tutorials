/* 01-Introduction to C Programming: fig01_10.c
   prints the sum, the average, the product, the least and
   the greatest of these three numbers */
#include <stdio.h>

int main( void )
{
        printf( "Enter three different integers: " );
        
        int num1, num2, num3;
        scanf( "%d%d%d", &num1, &num2, &num3 );

        int sum = num1 + num2 + num3;
        printf( "Sum is %d\n", sum );

        int average = (num1 + num2 + num3) / 3;
        printf( "Average is %d\n", average );
        
        int product = num1 * num2 * num3;
        printf( "Product is %d\n", product );
        
        int smallest, largest;
        
        /* I use the simple if selection form to determine the
           smallest of the three numbers entered. */

        if ( num1 < num2 && num1 < num3 )
        {
                smallest = num1;
        }
        
        if ( num2 < num1 && num2 < num3 )
        {
                smallest = num2;
        }

        if ( num3 < num1 && num3 < num2 )
        {
                smallest = num3;
        }
        
        /* I again use the simple selection form of if to
           determine the largest of the three numbers entered. */

        if ( num1 > num2 && num1 > num3 )
        {
                largest = num1;
        }
        
        if ( num2 > num1 && num2 > num3 )
        {
                largest = num2;
        }

        if ( num3 > num1 && num3 > num2 )
        {
                largest = num3;
        }

        printf( "Smallest is %d\n", smallest );
        printf( "Largest is %d\n", largest );

        return 0;
}
