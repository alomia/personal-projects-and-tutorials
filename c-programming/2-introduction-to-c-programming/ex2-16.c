// Chapter 2 - Introduction to C Programming
// Exercise 2.16 - Arithmetic
#include <stdio.h>

int main(void)
{
    int firstNumber = 0;
    int secondNumber = 0;

    printf("Enter two integers: ");
    scanf("%d%d", &firstNumber, &secondNumber);

    printf("\nThe sum is %d", firstNumber + secondNumber);
    printf("\nThe product is %d", firstNumber * secondNumber);
    printf("\nThe difference is %d", firstNumber - secondNumber);
    printf("\nThe quotient is %d", firstNumber / secondNumber);
    printf("\nThe remainder is %d\n", firstNumber % secondNumber);
}