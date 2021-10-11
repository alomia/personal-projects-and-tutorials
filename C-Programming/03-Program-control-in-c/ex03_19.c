/* 03 - Programi control in c: ex03_19.c
   Bar-Chart Printing Program */
#include <stdio.h>

int main(void)
{
        unsigned int num1 = 0;
        unsigned int num2 = 0;
        unsigned int num3 = 0;
        unsigned int num4 = 0;
        unsigned int num5 = 0;
        
        unsigned int counter;

        printf("Enter five numbers(between 1 and 30): ");
        scanf("%u%u%u%u%u", &num1, &num2, &num3, &num4, &num5);

        for (counter = 1; counter <= num1; counter++) {
                printf("%s", "*");
        }
        puts("");

        for (counter = 1; counter <= num2; counter++) {
                printf("%s", "*");
        }
        puts("");

        for (counter = 1; counter <= num3; counter++) {
                printf("%s", "*");
        }
        puts("");

        for (counter = 1; counter <= num4; counter++) {
                printf("%s", "*");
        }
        puts("");

        for (counter = 1; counter <= num5; counter++) {
                printf("%s", "*");
        }
        puts("");

        return 0;
}
