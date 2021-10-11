/* 03 - Program control in c: ex03_01.c
   print the numbers from 100 to 1 */
#include <stdio.h>

int main(void)
{
        int x;

        for (x = 100; x >= 1; x--)
                printf( "%d\n", x );
                        
        return 0;
}
