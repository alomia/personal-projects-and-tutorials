/* 04 - C Functions: ex04_16.c
   5.27 - Prime numbers */
#include <stdio.h>

int isPrime(int number);

int main(void)
{
        for (int number = 1; number <= 10000; number++)
        {
                if (isPrime(number))
                        printf("%d\n", number);
        }
}

int isPrime(int number)
{
        int divisible = 0;
        int prime = 0;

        for (int count = 1; count <= number; count++)
        {
                if (number % count == 0)
                        divisible += 1;

                if (divisible > 2)
                        break;
        }
        
        if (divisible == 2)
                prime = 1;
        return prime;
}
