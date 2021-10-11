/* 02 - Structured Program Development in C: fig02_16.c
   This is an improved version of the previous program, fig02_15.c,
   in this version the program only prints the edges of  the square. */
#include <stdio.h>

int main( void )
{
        unsigned int size;
        unsigned int row;
        unsigned int column = 1;

        printf( "Enter square size: " );
        scanf( "%d", &size );


        while ( column <= size ) {
                
                row  = 1;

                while ( row <= size ) {
                        
                        if ( column == 1 ) {
                                printf( "*" );
                        }

                        else if ( column == size ) {
                                printf( "*" );
                        }

                        else {
                                if ( row == 1 ) {
                                        printf( "*" );
                                }

                                if ( row == size - 1 ) {
                                        printf( "*" );
                                }
                                else {
                                        printf("\40");
                                }
                        }

                        row++;
                }

                printf( "\n" );
                column++;
        }

        return 0;
}
