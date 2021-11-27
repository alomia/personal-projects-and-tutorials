#include <stdio.h>

unsigned long long int factorial(unsigned int number);

int main(void)
{
        printf("%llu\n", factorial(10));

        return 0;
}

unsigned long long int factorial(unsigned int number)
{
        if (number <= 1)
        {
                return 1;
        }
        else
        {
                return (number * factorial(number - 1));
        }
}