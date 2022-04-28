// Chapter 3 - Structured Program Development in C
// Exercise 3.26 - Find the Two Largest Numbers
#include <stdio.h>

int main(void)
{
    unsigned int counter = 0, number = 0, largest = 0, medium = 0;

    while (counter < 10)
    {
        printf("%s ", "Enter a positive integer:");
        scanf("%d", &number);

        if (number > largest)
        {
            medium = largest;
            largest = number;
        }

        if (number > medium && number < largest)
        {
            medium = number;
        }

        counter++;
    }

    printf("\nLargest number is %d", largest);
    printf("\nSecond largest number is %d", medium);
    puts("");
}