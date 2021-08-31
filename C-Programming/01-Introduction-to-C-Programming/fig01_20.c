/* 01-Introduction to C Programming: fig01_20.c
   Body Mass Index Calculator */
#include <stdio.h>

int main( void )
{
        float weightKilograms, heightMeters;

        printf( "Enter your weight (kilograms): " );
        scanf( "%f", &weightKilograms );

        printf( "Enter your height (meters): " );
        scanf( "%f", &heightMeters );

        float BMI = weightKilograms / (heightMeters * heightMeters);
        
        printf( "\nYour BMI is %.1f\n\n", BMI );
        
        printf( "BMI VALUES\n" );
        printf( "Underweight:  less than 18.5\n" );
        printf( "Normal:       between 18.5 and 24.9\n" );
        printf( "Overweight:   between 25 and 29.9\n" );
        printf( "Obese:        30 or greater\n" );

        return 0;        
}
