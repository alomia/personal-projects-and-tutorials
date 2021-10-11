/* 02 - Structured Program Development in C: fig02_01.c
   Program to obtain the grade point average of a group
   by means of a counter-controlled repetition. */
#include <stdio.h>

int main( void )
{
        unsigned int counter;
        int grade;
        int total;
        int average;
        
        total = 0;
        counter = 1;

        while ( counter <= 10 ) {
                printf( "Enter grade: " );
                scanf( "%d", &grade );
                total = total + grade;
                counter++;
        }
        
        average = total / 10;

        printf( "Class average is %d\n", average );

        return 0;
}

/*******************************************************
 * NOTE:                                               *
 * This program only produces results of integer type. *
 * The improved version of this program is fig02_02.c. *
 *******************************************************/
