// Chapter 3 - Structured Program Development in C
// Exercise 3.35 - Printing the Decimal Equivalent of a Binary Number
#include <stdio.h>

int main(void)
{
    unsigned int binaryNumber = 0;

    printf("%s ", "Enter a binary number of 5 digits or less(-1 to end):");
    scanf("%d", &binaryNumber);

    while (binaryNumber != -1)
    {
        unsigned int decimalNumber = 0, bit = 0, mult = 1;

        for (unsigned int i = 1; i <= 5; i++)
        {
            bit = binaryNumber % 10;
            binaryNumber = binaryNumber / 10;

            if (bit == 1)
                decimalNumber += bit * mult;

            mult = mult * 2;
        }

        printf("Decimal number %d", decimalNumber);
        puts("");

        printf("\n%s ", "Enter a binary number of 5 digits or less(-1 to end):");
        scanf("%d", &binaryNumber);
    }
}