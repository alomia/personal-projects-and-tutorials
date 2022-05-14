// Chapter 4 - C Program Control
// Exercise 4.16 - Triangle-Printing Program
#include <stdio.h>

int main(void)
{
    puts("(A)");
    for (unsigned int column = 1; column <= 10; ++column)
    {
        for (unsigned int row = 1; row <= column; ++row)
        {
            printf("%s", "*");
        }
        puts("");
    }

    puts("(B)");
    for (unsigned int column = 10; column >= 1; --column)
    {
        for (unsigned int row = 1; row <= column; ++row)
        {
            printf("%s", "*");
        }
        puts("");
    }

    puts("(C)");
    for (unsigned int column = 10; column >= 1; --column)
    {
        for (unsigned int blank_space = 9; blank_space >= column; --blank_space)
        {
            printf("%s", " ");
        }

        for (unsigned int row = 1; row <= column; ++row)
        {
            printf("%s", "*");
        }
        puts("");
    }

    puts("(D)");
    for (unsigned int column = 1; column <= 10; ++column)
    {
        for (unsigned int blank_space = column; blank_space <= 9; ++blank_space)
        {
            printf("%s", " ");
        }

        for (unsigned int row = 1; row <= column; ++row)
        {
            printf("%s", "*");
        }
        puts("");
    }
}
