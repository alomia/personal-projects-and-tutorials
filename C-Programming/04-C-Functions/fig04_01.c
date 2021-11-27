/* 04 - C Functions: fig04_01.c
   Creating and using a programmer-defined function */
#include <stdio.h>

int square(int y);

int main(void)
{
        int i;

        for (i = 0; i <= 10; i++) {
                printf("%d ", square(i));
        }

        puts("");

        return 0;
}


int square(int y)
{
        return y * y;
}
