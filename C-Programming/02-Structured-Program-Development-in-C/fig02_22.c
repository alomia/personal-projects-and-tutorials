/* 02 - Structured Program Development in C: fig02_22.c
   Checkerboard Pattern of Asterisks */
#include <stdio.h>

int main( void )
{
        unsigned int column = 1;
        unsigned int row;

        while ( column <= 8 ) {

                row = 1;
                
                if ( column % 2 == 0 ) {
                        printf( " " );
                }

                while ( row <= 8 ) {

                        printf( "* " );
                        row++;
                }

                printf( "\n" );
                column++;
        }

        return 0;
}
