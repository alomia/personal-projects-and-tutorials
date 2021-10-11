/* 02 - Structured Program Development in C: fig02_15.c
   read the measure of one of the sides of a square and display
   the square with asterisks. */
#include <stdio.h>

int main( void )
{
        unsigned int size;
        unsigned int row;
        unsigned int column = 1;
        
        printf( "Enter square size: " );
        scanf( "%d", &size );
        
        while ( column <= size ) {
                
                row = 1;

                while ( row <= size ) {
                        printf( "*" );
                        row++;
                }

                column++;
                printf( "\n" );
        }

        return 0;
}
