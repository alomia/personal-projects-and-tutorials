/* 03 - Program control in c: ex03_07.c
   adds the integers from 100 to 150 and displays the result. */
#include <stdio.h>

int main(void)
{
        int x;
        int total = 0;

        for (x = 100; x <= 150; ++x) {
                total += x;
        }
        
        printf("Total is %d\n", total);

        return 0;
}
