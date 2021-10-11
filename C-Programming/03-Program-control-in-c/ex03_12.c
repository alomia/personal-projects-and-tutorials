/* 03 - Program control in c: ex03_12.c
   program that finds the smallest of several integers,
   the first value to be read specifies the number of remaining values.*/
#include <stdio.h>

int main(void)
{       
        unsigned int num;
        unsigned int sentinel;
        unsigned int counter = 1;
        unsigned int smallerNum = 0;

        printf("Enter integers: ");
        scanf("%u", &sentinel);

        while (counter <= sentinel) {

                scanf("%u", &num);
                
                if (counter == 1) {
                        smallerNum = num;
                }

                if (num < smallerNum) {
                        smallerNum = num;
                }

                counter++;
        }

        printf("Smaller number %u\n", smallerNum);

        return 0;
}
