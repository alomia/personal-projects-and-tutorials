/* 01-Introduction to C Programming: fig01_17.c
   program that prints the integer equivalents of some characters */
#include <stdio.h>

int main( void )
{
        printf( "\tASCII CODE\n" );
        printf( "--------------------------\n" );
        printf( " A = %d | B = %d | C = %d\n", 'A', 'B', 'C' );
        printf( " a = %d | b = %d | c = %d\n", 'a', 'b', 'c' );
        printf( " 1 = %d | 2 = %d | 3 = %d\n", '1', '2', '3' );
        printf( " $ = %d | * = %d | + = %d\n", '$', '*', '+' );

        return 0;
}
