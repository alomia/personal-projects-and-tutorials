/* 03 - Program control in c: ex03_10.c
   adds up a sequence of integers, the first integer
   read specifies the number of remaining values. */
#include <stdio.h>

int main(void)
{
        unsigned int value;
        unsigned int sentinel;
        unsigned int total = 0;
        unsigned int counter = 1;

        scanf("%u", &sentinel);

        while (counter <= sentinel) {

                scanf("%u", &value);
                total += value;

                counter++;
        }

        printf("sum is %u\n", total);

        return 0;
}
