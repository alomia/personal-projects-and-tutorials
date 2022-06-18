// Chapter 5 - C Functions
// Exercise 5.29 - Greatest Common Divisor
#include <stdio.h>

unsigned int gcd(unsigned int integerOne, unsigned int integerTwo);

int main(void)
{
    printf("GCD is %d", gcd(500, 238));
    puts("");
}

unsigned int gcd(unsigned int integerOne, unsigned int integerTwo)
{
    unsigned int gcd = 0;
    unsigned int count = 1;

    while (count <= integerOne || count <= integerTwo)
    {
        if (integerOne % count == 0 && integerTwo % count == 0)
        {
            gcd = count;
        }

        ++count;
    }

    return gcd;
}
