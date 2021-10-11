/* 03 - Program control in c: ex03_11.c
   calculate and print the average of several integers,
   the last value read by the scanf instruction is the sentinel 9999.*/
#include <stdio.h>

int main(void)
{  
        unsigned int num;
        unsigned int sum = 0;
        unsigned int counter = 1;
        unsigned int sentinel = 9999;

        double average;

        printf("Enter integers(9999 to end): ");
        scanf("%u", &num);

        while (num != sentinel) {

                sum += num;
                scanf("%u", &num);

                counter++;
        }

        if (sum > 0) {
                average = sum;
                average /= counter - 1;
        }

        printf("Average is %.2lf\n", average);

        return 0;
}
