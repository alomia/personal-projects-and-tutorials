/* 02 - Structured Program Development in C: fig02_24.c
   program that reads the radius of a circle, calculate and display
   the diameter, circumference and area. Use the value 3.14159 for π */
#include <stdio.h>

int main( void )
{
        float radius;
        float PI = 3.14159;

        printf( "Enter radius (-1 to end): " );
        scanf( "%f", &radius );

        while ( radius != -1 ) {

                float diameter = 0;
                float circumference = 0;
                float area = 0;
                
                diameter = radius * 2;
                circumference = PI * diameter;
                area = PI * (radius * radius);

                printf( "Diameter is %.2f\n", diameter );
                printf( "Circumference is %.2f\n", circumference );
                printf( "Area is %.2f\n", area );
                
                printf( "\nEnter radius (-1 to end): " );
                scanf( "%f", &radius );
        }

        return 0;
}
