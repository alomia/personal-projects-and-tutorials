 /* 02 - Structured Program Development in C: fig02_02.c
    Program to obtain the average of grades of a group by
    means of a repetition controlled by a sentinel. */
#include <stdio.h>

int main( void )
{
        unsigned int counter;
        int grade;
        int total;

        float average;
        
        total = 0;
        counter = 0;

        printf( "Enter grade, -1 to end: " );
        scanf( "%d", &grade );

        while ( grade != -1 ) {
                total = total + grade;
                counter++;

                printf( "Enter grade, -1 to end: " );
                scanf( "%d", &grade );
        }
        
        if ( counter != 0 ) {
                average = ( float ) total / counter;
                printf( "Class average is %.2f\n", average );
        }
        else {
                puts( "No grades were entered" );
        } 

        return 0;
}
