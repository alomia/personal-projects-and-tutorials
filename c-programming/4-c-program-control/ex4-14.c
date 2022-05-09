// Chapter 4 - C Program Control
// Exercise 4.14 - Factorials
#include <stdio.h>

int main(void)
{
    for (unsigned int n = 1; n <= 5; ++n)
    {
        unsigned int factorial = 1;

        printf("%d! = ", n);

        for (unsigned int num = 1; num <= n; ++num)
        {
            factorial *= num;
            printf("%d", num);

            if (num < n)
                printf("%s", " * ");
        }

        printf("%3c %d", '=', factorial);
        puts("");
    }
}
