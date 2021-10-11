/* 03 - Program control in c: ex03_01.c
   should display the odd integers from 999 to 1 */
#include <stdio.h>

int main(void)
{
        int x;

        for (x = 999; x >= 1; x--)
                if (x % 2 != 0)
                        printf("%d\n", x);

        return 0;
}
