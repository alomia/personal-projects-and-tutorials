// Chapter 3 - Structured Program Development in C
// Exercise 3.39 - Checkerboard Pattern of Asterisks
#include <stdio.h>

int main(void)
{
    unsigned int size = 8;

    for (unsigned int row = 1; row <= size; row++)
    {
        if (row % 2 == 0)
            printf("%s", " ");

        for (unsigned int column = 1; column <= size; column++)
            printf("%s", "* ");

        puts("");
    }
}