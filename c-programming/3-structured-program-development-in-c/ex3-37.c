// Chapter 3 - Structured Program Development in C
// Exercise 3.37 - Detecting Multiples of 10
#include <stdio.h>

int main(void)
{
    for (unsigned int count = 1; count <= 100; count++)
    {
        printf("%c", '*');

        if (count % 10 == 0)
        {
            puts("");
        }
    }
}