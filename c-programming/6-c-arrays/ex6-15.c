// Chapter 6 - C Arrays
// Exercise 6.15 - Duplicate Elimination
#include <stdio.h>
#define SIZE 10

int duplicate(int array[], size_t size, int number);

int main(void)
{
    size_t count = 0;
    int number = 0;
    int a[SIZE] = {0};

    while (count < SIZE)
    {
        printf("%s", "Enter a number from 10 to 100: ");
        scanf("%d", &number);

        if (number < 10 || number > 100)
        {
            puts("Sorry, the number entered is out of range.");
        }
        else
        {
            int duplic = duplicate(a, SIZE, number);

            if (duplic == 1)
            {
                --count;
            }
            else
            {
                printf("%d successfully added\n", number);
                a[count] = number;
            }
        }
        puts("");
        ++count;
    }
}

int duplicate(int array[], size_t size, int number)
{
    for (size_t i = 0; i < size; ++i)
    {
        if (array[i] == number)
        {
            return 1;
        }
    }

    return 0;
}
