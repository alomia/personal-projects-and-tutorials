// Chapter 5 - C Functions
// Exercise 5.28 - Reversing Digits
#include <stdio.h>

unsigned int reversingDigits(unsigned int number);

int main(void)
{
    unsigned int number = 0;

    printf("%s", "Enter an integer(-1 to end): ");
    scanf("%d", &number);

    while (number != -1)
    {
        printf("Inverted number is: %u", reversingDigits(number));
        puts("");
        puts("");
        printf("%s", "Enter an integer(-1 to end): ");
        scanf("%d", &number);
    }
}

unsigned int reversingDigits(unsigned int number)
{
    unsigned int reversedNumber = 0;
    unsigned int digit = 0;

    while (number != 0)
    {
        digit = number % 10;
        number /= 10;
        reversedNumber = reversedNumber * 10 + digit;
    }

    return reversedNumber;
}
