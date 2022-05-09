// Chapter 4 - C Program Control
// Exercise 4.10 - Average a Sequence of Integers
#include <stdio.h>

int main(void)
{
    unsigned int count = 0, value = 0, total = 0, average = 0;

    while (value != 9999)
    {
        total += value;
        scanf("%d", &value);
        ++count;
    }

    average = total / (--count);
    printf("Average is %d", average);
    puts("");
}