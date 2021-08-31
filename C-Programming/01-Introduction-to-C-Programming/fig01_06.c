/* 01-Introduction to C Programming: fig01_06.c
   Calculate the product of three integers */
#include <stdio.h>

int main( void )
{
        printf( "Enter three integers: " );
        
        int x, y, z;
        scanf( "%d%d%d", &x, &y, &z );
        
        int result = x * y * z;
        printf( "The product is %d\n", result );

        return 0;
}
