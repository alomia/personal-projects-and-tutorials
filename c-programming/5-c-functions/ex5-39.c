// Chapter 5 - C Functions
// Exercise 5.39 - Recursive Greatest Common Divisor
#include <stdio.h>

unsigned int gcd(unsigned int x, unsigned int y);

int main(void)
{
    unsigned int num1 = 0;
    unsigned int num2 = 0;

    printf("%s", "Enter two integers: ");
    scanf("%u%u", &num1, &num2);
    printf("GCD(%u, %u) = %u", num1, num2, gcd(num1, num2));
    puts("");
}

unsigned int gcd(unsigned int x, unsigned int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y, x % y);
    }
}
