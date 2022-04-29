// Chapter 3 - Structured Program Development in C
// Exercise 3.36 - How Fast Is Your Computer?
#include <stdio.h>

int main(void)
{
    unsigned int count = 1;
    unsigned int billion = 1000000000;
    unsigned int oneHundredMillion = 100000000;

    while (count <= billion)
    {
        if (count % oneHundredMillion == 0)
        {
            printf("%d", count);
            puts("");
        }

        count++;
    }
}