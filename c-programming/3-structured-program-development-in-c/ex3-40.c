// Chapter 3 - Structured Program Development in C
// Exercise 3.40 - Multiples of 2 with an Infinite Loop
#include <stdio.h>

int main(void)
{
    unsigned int count = 0;

    while (1)
    {
        if (count % 2 == 0)
            printf("%d ", count);

        ++count;
    }
}