// Chapter 2 - Introduction to C Programming
// Exercise 2.30 - Separating Digits in an Integer
#include <stdio.h>

int main(void)
{
    int number = 0;
    int firstDigit = 0, secondDigit = 0, thirdDigit = 0, fourthDigit = 0, fifthDigit = 0;
    
    printf("%s", "Enter a five digit number: ");
    scanf("%d", &number);

    firstDigit = number / 10000;
    number = number % 10000;

    secondDigit = number / 1000;
    number = number % 1000;

    thirdDigit = number / 100;
    number = number % 100;

    fourthDigit = number / 10;
    number = number % 10;

    fifthDigit = number;

    printf("%4d%4d%4d%4d%4d\n", firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit);
}