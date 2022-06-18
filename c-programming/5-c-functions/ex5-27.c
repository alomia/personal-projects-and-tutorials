// Chapter 5 - C Functions
// Exercise 5.27 - Prime Numbers
#include <stdio.h>
#include <time.h>

int isPrime(unsigned int number);

int main(void)
{
    for (unsigned int number = 1; number <= 10000; number++)
    {
        unsigned int result = isPrime(number);

        if (result)
        {
            printf("%d", number);
            puts("");
        }
    }
}

int isPrime(unsigned int number)
{
    unsigned int count = 1;
    unsigned int divisible = 0;

    while (divisible < 3 && count <= number)
    {
        if (number % count == 0)
            ++divisible;
        ++count;
    }

    return divisible == 2;
}
