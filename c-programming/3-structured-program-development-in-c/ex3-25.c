// Chapter 3 - Structured Program Development in C
// Exercise 3.25 - Tabular Output 2
#include <stdio.h>

int main(void)
{
    printf("%s", "\tA\tA+2\tA+4\tA+6\n\n");

    for (unsigned int number = 3; number <= 15; number += 3)
    {
        printf("\t%d\t%d\t%d\t%d\n", number, number + 2, number + 4, number + 6);
    }
}