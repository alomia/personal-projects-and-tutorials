/* 03 - Program control in c: fig03_02.c
   summation with for */
#include <stdio.h>

int main(void)
{
        unsigned int counter = 0;
        unsigned int sum = 0;

        for (counter = 2; counter <= 100; counter += 2) {
                sum += counter;
        }

        printf("Su is %d\n", sum );
        
        return 0;
}
