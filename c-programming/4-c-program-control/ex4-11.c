// Chapter 4 - C Program Control
// Exercise 4.11 - Find the Smallest
#include <stdio.h>

int main(void)
{
    unsigned int count = 1, sentinel = 0, smaller = 0, value = 0;

    scanf("%d", &sentinel);

    while (count <= sentinel)
    {
        scanf("%d", &value);

        if (count == 1 || value < smaller)
            smaller = value;

        ++count;
    }

    printf("The smallest is %d", smaller);
    puts("");
}
