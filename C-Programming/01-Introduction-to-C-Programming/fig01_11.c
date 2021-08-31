/* 01-Introduction to C Programming: fig01_11.c
   program that reads in the radius of a circle and
   prints the circle’s diameter, circumference and area. */
#include <stdio.h>

int main( void )
{
        const float PI = 3.14159;

        printf( "Enter the radius: " );

        float radius;
        scanf( "%f", &radius );

        printf( "Diameter is %f\n", radius * 2 );
        printf( "Circumference is %f\n", PI * (radius * 2) );
        printf( "Circle area is %f\n", PI  * radius );

        return 0;
}
