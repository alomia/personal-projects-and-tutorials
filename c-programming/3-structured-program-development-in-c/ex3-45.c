// Chapter 3 - Structured Program Development in C
// Exercise 3.45 - Factorial
#include <stdio.h>

int main(void)
{
    unsigned int number = 0;

    printf("%s ", "Enter a non-negative integer(-1 to end):");
    scanf("%d", &number);

    while (number != -1)
    {
        unsigned int factorial_n = 1;

        for (unsigned int n = number; n >= 1; n--)
        {
            factorial_n *= n;
        }

        printf("%d! = %d\n", number, factorial_n);

        printf("\n%s ", "Enter a non-negative integer(-1 to end):");
        scanf("%d", &number);
    }
}