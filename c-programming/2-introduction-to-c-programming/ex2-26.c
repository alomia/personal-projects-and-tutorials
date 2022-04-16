// Chapter 2 - Introduction to C Programming
// Exercise 2.26 - Multiples
#include <stdio.h>

int main(void)
{
    int firstNumber, secondNumber = 0;
    
    printf("%s", "Enter Two integers: ");
    scanf("%d%d", &firstNumber, &secondNumber);
    
    if (firstNumber % secondNumber == 0)
    {
        printf("%d %s %d\n", firstNumber, "is a multiple of", secondNumber);
    }

    if (firstNumber % secondNumber != 0)
    {
        printf("%d %s %d\n", firstNumber, "is not a multiple of", secondNumber);
    }
    
}