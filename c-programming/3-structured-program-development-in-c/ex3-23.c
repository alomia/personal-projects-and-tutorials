// Chapter 3 - Structured Program Development in C
// Exercise 3.23 - Find the Largest Number
#include <stdio.h>

int main(void)
{
    unsigned int counter = 0, number = 0, largest = 0;

    while (counter < 10)
    {
        printf("%s ", "Enter a positive integer:");
        scanf("%d", &number);

        if (number > largest)
        {
            largest = number;
        }

        counter++;
    }

    printf("\nLargest number is %d", largest);
    puts("");
}