/* 01-Introduction to C Programming: fig01_13.c
   program that reads five integers and then prints
   the largest and smallest number in the group. */
#include <stdio.h>

int main( void )
{
        printf( "Enter five integers: " );

        int num1, num2, num3, num4, num5;
        scanf( "%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5 );

        int largest, smallest;
        
        /* I use five if statements to determine which is the
           largest of the five numbers entered */

        if ( num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5 )
        {
                largest = num1;
        }
        
        if ( num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5 )
        {
                largest = num2;
        }
        
        if ( num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5 )
        {
                largest = num3;
        }

        if ( num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5 )
        {
                largest = num4;
        }

        if ( num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4 )
        {
                largest = num5;
        }
        
        /* I use five if statements to determine which is the
           smallest of the five numbers entered. */

        if ( num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5 )
        {
                smallest = num1;
        }
        
        if ( num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5 )
        {
                smallest = num2;
        }

        if ( num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5 )
        {
                smallest = num3;
        }

        if ( num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5 )
        {
                smallest = num4;
        }
        
        if ( num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4 )
        {
                smallest = num5;
        }

        printf( "The largest group is %d\n", largest );
        printf( "The smallest group is %d\n", smallest );
        
        return 0;
}
