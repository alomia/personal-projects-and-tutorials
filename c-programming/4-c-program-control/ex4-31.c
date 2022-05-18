// Chapter 4 - C Program Control
// Exercise 4.31 - Diamond-Printing Program
#include <stdio.h>

int main(void)
{
    unsigned int row = 1;
    unsigned int column = 9;
    unsigned int blank_space = 5;

    for (unsigned int count_column = 1; count_column <= column; ++count_column)
    {
        if (count_column < 5)
        {
            for (unsigned int count_space = 1; count_space <= blank_space; ++count_space)
            {
                printf("%s", " ");
            }

            for (unsigned int count_row = 1; count_row <= row; ++count_row)
            {
                printf("%s", "*");
            }
            puts("");
            --blank_space;
            row += 2;
        }
        else
        {
            for (unsigned int count_space = 1; count_space <= blank_space; ++count_space)
            {
                printf("%s", " ");
            }

            for (unsigned int count_row = 1; count_row <= row; ++count_row)
            {
                printf("%s", "*");
            }
            puts("");
            ++blank_space;
            row -= 2;
        }
    }
}
