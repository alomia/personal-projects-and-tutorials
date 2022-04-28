// Chapter 3 - Structured Program Development in C
// Exercise 3.22 - Printing Numbers from a Loop
#include <stdio.h>

int main(void)
{
    for (unsigned int number = 1; number <= 10; number++)
    {
        printf("%4d", number);
    }
    puts("");
}