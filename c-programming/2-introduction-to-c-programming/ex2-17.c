// Chapter 2 - Introduction to C Programming
// Exercise 2.17 - Printing Values with printf
#include <stdio.h>

int main(void)
{
    // a) Using one printf statement with no conversion specifiers.
    printf("1 2 3 4");
    puts("");

    // b) Using one printf statement with four conversion specifiers.
    printf("%d %d %d %d", 1, 2, 3, 4);
    puts("");

    // c) Using four printf statements.
    printf("%d ", 1);
    printf("%d ", 2);
    printf("%d ", 3);
    printf("%d", 4);
    puts("");
}