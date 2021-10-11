/* 03 - Program control in c: fig03_02.c
   Counter-controlled iteration with the for statement. */
#include <stdio.h>

int main(void)
{
        for (unsigned int counter = 1; counter<= 10; counter++) {
                printf("%d\n", counter);
        }

        return 0;
}
