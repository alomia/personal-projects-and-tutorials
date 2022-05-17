// Chapter 4 - C Program Control
// Exercise 4.21 - Counter-controlled iteration with the for statement.
#include <stdio.h>

int main(void)
{
    unsigned int counter;

    for (; counter <= 10; ++counter);

    printf("%u\n", counter);
}
