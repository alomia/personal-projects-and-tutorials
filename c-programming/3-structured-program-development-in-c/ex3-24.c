// Chapter 3 - Structured Program Development in C
// Exercise 3.24 - Tabular Output
#include <stdio.h>

int main(void)
{
    printf("%s", "\tN\t10*N\t100*N\t1000*N\n\n");

    for (unsigned int number = 1; number <= 10; number++)
    {
        printf("\t%d\t%d\t%d\t%d\n", number, number * 10, number * 100, number * 1000);
    }
}