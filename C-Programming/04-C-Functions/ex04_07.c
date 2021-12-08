/* 04 - C Functions: ex04_07.c
   Function that returns the power of a number according to the integer as exponent.
   For example, integerPower(3, 4 ) = 3 * 3 * 3 * 3 */

#include <stdio.h>

double integerPower(double base, unsigned int exponent);

int main(void)
{
        printf("%.2lf\n", integerPower(3, 4));

        return 0;
}


double integerPower(double base, unsigned int exponent)
{
        double result = 1;

        for (int counter = 1; counter <= exponent; counter++)
                result *= base;

        return result;
}
