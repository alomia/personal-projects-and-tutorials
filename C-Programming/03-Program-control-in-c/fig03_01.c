/* 03 - Program control in c: fig03_01.c
   Counter-controlled iteration. */
#include <stdio.h>

int main(void)
{
        unsigned int counter = 1;

        while (counter <= 10) {

                printf("%d\n", counter);
                counter++;          
        }

        return 0;
}
