/* 04 - C Functions: ex04_15.c
   Print the factors of each perfect number to confirm that the number is indeed perfect. */
#include <stdio.h>

void isPerfect(int number);

int main(void)
{
        for (int number = 1; number <= 1000; number++)
        {
                isPerfect(number);
        }
}

void isPerfect(int number)
{
        int sum = 0;
        int validator = 0;

        for (int count = 1; count < number; count++)
        {
                sum += count;

                if (sum == number)
                {
                        validator = 1;
                        break;
                }
        }

        if (validator)
        {
                int sum2 = 0;
                printf("%d = ", number);
                for (int count = 1; count < number; count++)
                {
                        sum2 += count;
                        printf("%d", count);
                        
                        if (sum2 == number)
                                break;

                        printf(" + ");
                }
                puts(" ");
        }
}
