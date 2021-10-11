/* 02 - Structured Program Development in C: fig02_04.c
   Gas Mileage - The program must calculate and display
   the kilometers per liter obtained during each tank filling. */
#include <stdio.h>

int main( void )
{
        float gallons;
        float miles;
        float total;
        float average; 
        float gallons_x_miles;

        unsigned int counters = 0;
        
        printf( "Enter the gallons used (-1 to end): " );
        scanf( "%f", &gallons );

        while ( gallons != -1 ) { 

                printf( "Enter the miles driven: " );
                scanf( "%f", &miles );

                gallons_x_miles = miles / gallons;

                total += gallons_x_miles;

                printf( "The miles/gallon for this tank was %f\n", gallons_x_miles );

                counters++;

                printf( "\nEnter the gallons used (-1 to end): " );
                scanf( "%f", &gallons );
        }

        if ( counters != 0) {
                average = total / counters;

                printf( "\nThe overall average miles/gallon was %lf\n", average );
        }

        return 0;
}
