// Chapter 2 - Introduction to C Programming
// Exercise 2.19 - Arithmetic, Largest Value and Smallest Value
#include <stdio.h>

int main(void)
{
    int firstNumber = 0, secondNumber = 0, thirdNumber = 0;

    printf("%s", "Enter three different integers: ");
    scanf("%d%d%d", &firstNumber, &secondNumber, &thirdNumber);

    int sum = firstNumber + secondNumber + thirdNumber;
    int average = (firstNumber + secondNumber + thirdNumber) / 3;
    int product = firstNumber * secondNumber * thirdNumber;
    int smallest = 0, largest = 0;

    if (firstNumber < secondNumber && firstNumber < thirdNumber)
    {
        smallest = firstNumber;
    }

    if (secondNumber < firstNumber && secondNumber < thirdNumber)
    {
        smallest = secondNumber;
    }
    
    if (thirdNumber < firstNumber && thirdNumber < secondNumber)
    {
        smallest = thirdNumber;
    }

    if (firstNumber > secondNumber && firstNumber > thirdNumber)
    {
        largest = firstNumber;
    }

    if (secondNumber > firstNumber && secondNumber > thirdNumber)
    {
        largest = secondNumber;
    }
    
    if (thirdNumber > firstNumber && thirdNumber > secondNumber)
    {
        largest = thirdNumber;
    }

    printf("%s %d\n", "Sum is", sum);
    printf("%s %d\n", "Average is", average);
    printf("%s %d\n", "Product is", product);
    printf("%s %d\n", "Smallest is", smallest);
    printf("%s %d\n", "Largest is", largest);
}