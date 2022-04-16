// Chapter 2 - Introduction to C Programming
// Exercise 2.18 - Comparing Integers
#include <stdio.h>

int main(void)
{
    int firstNumber = 0, secondNumber = 0;

    printf("%s", "Enter two integers: ");
    scanf("%d %d", &firstNumber, &secondNumber);

    if (firstNumber > secondNumber)
    {
        printf("%d%s\n", firstNumber, " is large");
    }

    if (secondNumber > firstNumber)
    {
        printf("%d%s\n", secondNumber, " is large");
    }

    if (firstNumber == secondNumber)
    {
        printf("%s\n", "These numbers are equal");
    }
}