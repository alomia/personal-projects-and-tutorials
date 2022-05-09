// Chapter 4 - C Program Control
// Exercise 4.9 - Sum a Sequence of Integers
#include <stdio.h>

int main(void)
{
    unsigned int count = 1, sentinel = 0, value = 0, total = 0;

    scanf("%d", &sentinel);

    while (count <= sentinel)
    {
        scanf("%d", &value);
        total += value;
        ++count;
    }

    printf("The sum total of the values entered is %d", total);
    puts("");
}
