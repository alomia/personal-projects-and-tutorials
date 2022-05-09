// Chapter 4 - C Program Control
// Exercise 4.12 - Calculating the Sum of Even Integers
#include <stdio.h>

int main(void)
{
    unsigned int sumIntegers = 0;

    for (unsigned int count = 2; count <= 30; ++count)
    {
        if (count % 2 == 0)
            sumIntegers += count;
    }

    printf("The sum of the even integers is %d", sumIntegers);
    puts("");
}
