// Chapter 2 - Introduction to C Programming
// Exercise 2.23 - Largest and Smallest Integers
#include <stdio.h>

int main(void)
{
    int firstNumber, secondNumber, thirdNumber = 0;

    printf("%s", "Enter three different integers: ");
    scanf("%d%d%d", &firstNumber, &secondNumber, &thirdNumber);

    int smallest, largest, middle = 0;

    if (firstNumber > secondNumber && firstNumber > thirdNumber)
    {
        largest = firstNumber;
    }

    if ((firstNumber > secondNumber && firstNumber < thirdNumber) || (firstNumber < secondNumber && firstNumber > thirdNumber))
    {
        middle = firstNumber;      
    }
    
    if (firstNumber < secondNumber && firstNumber < thirdNumber)
    {
        smallest = firstNumber;
    }


    if (secondNumber > firstNumber && secondNumber > thirdNumber)
    {
        largest = secondNumber;
    }

    if ((secondNumber > firstNumber && secondNumber < thirdNumber) || (secondNumber < firstNumber && secondNumber > thirdNumber))
    {
        middle = secondNumber;      
    }
    
    if (thirdNumber < firstNumber && thirdNumber < secondNumber)
    {
        smallest = thirdNumber;
    }


    if (thirdNumber > firstNumber && thirdNumber > secondNumber)
    {
        largest = thirdNumber;
    }

    if ((thirdNumber > firstNumber && thirdNumber < secondNumber) || (thirdNumber < firstNumber && thirdNumber > secondNumber))
    {
        middle = thirdNumber;      
    }
    
    if (thirdNumber < firstNumber && thirdNumber < secondNumber)
    {
        smallest = thirdNumber;
    }

    printf("%s %d\n", "Largest is", largest);
    printf("%s %d\n", "Middle is", middle);
    printf("%s %d\n", "Smallest is", smallest);
}