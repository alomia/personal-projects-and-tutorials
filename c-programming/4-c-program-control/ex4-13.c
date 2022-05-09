// Chapter 4 - C Program Control
// Exercise 4.13 - Calculating the Product of Odd Integers
#include <stdio.h>

int main(void)
{
    unsigned int product = 1;

    for (unsigned int count = 1; count <= 15; ++count)
    {
        if (count % 2 != 0)
            product *= count;
    }

    printf("The product of the odd integers is %d", product);
    puts("");
}
