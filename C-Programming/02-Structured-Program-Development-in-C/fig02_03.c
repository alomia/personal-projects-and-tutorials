/* 02 - Structured Program Development in C: fig02_03.c
   Analysis of examination results */
#include <stdio.h>

int main( void )
{
        unsigned int passes = 0;
        unsigned int failures = 0;
        unsigned int student = 1;
        
        int result;

        while ( student <= 10 ) {
                printf( "Enter result ( 1=pass,2=fail ): " );
                scanf( "%d", &result );

                if ( result == 1 ) {
                        passes += 1;
                }
                else {
                        failures += 1;
                }

                student += 1;
        }

        printf( "Passed %u\n", passes );
        printf( "Failed %u\n", failures );

        if ( passes > 8 ) {
                puts( "Bonus to instructor!" );
        }

        return 0;
}
