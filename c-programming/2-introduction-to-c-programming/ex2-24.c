// Chapter 2 - Introduction to C Programming
// Exercise 2.24 - Odd or Even
#include <stdio.h>

int main(void)
{
    int integer = 0;
    
    printf("%s", "Enter an integer: ");
    scanf("%d", &integer);

    if (integer % 2 == 0)
    {
        puts("Odd");
    }

    if (integer % 2 != 0)
    {
        puts("Even");
    }
}