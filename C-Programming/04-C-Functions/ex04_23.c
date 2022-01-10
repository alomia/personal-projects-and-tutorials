/* 04 - C Functions: ex04_23.c
   5.34 Recursive Exponentiation */

#include <stdio.h>

unsigned long long int power(unsigned int base, unsigned int exponent);

int main(void)
{
        int base = 0;
        int exponent = 0;

        puts("Exponent Calculator");
        printf("%s", "Enter base: ");
        scanf("%d", &base);

        printf("%s", "Enter exponent: ");
        scanf("%d", &exponent);

        printf("%s %lld\n", "Result:", power(base,exponent));

        return 0;
}

unsigned long long int power(unsigned int base, unsigned int exponent)
{
        if (exponent <= 0)
                return 1;
        else
                return (base * power(base, exponent -1));
}

