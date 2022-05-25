// Chapter 5 - C Functions
// Exercise 5.16 - Exponentiation
#include <stdio.h>

int integerPower(int base, unsigned int exponent);

int main(void)
{
    int base = 0;
    unsigned int exponent = 0;

    printf("%s", "Enter base: ");
    scanf("%d", &base);

    printf("%s", "Enter exponent: ");
    scanf("%u", &exponent);

    printf("%d raised to a power of %u is %d", base, exponent, integerPower(3, 4));
    puts("");
}

int integerPower(int base, unsigned int exponent)
{
    int power = base;

    for (unsigned int i = 1; i < exponent; ++i)
        power *= base;

    return power;
}
