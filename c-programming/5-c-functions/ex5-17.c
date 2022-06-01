// Chapter 5 - C Functions
// Exercise 5.17 - Multiples
#include <stdio.h>

unsigned int isMultiple(int firstNumber, int secondNumber);

int main(void)
{
    unsigned int firstInteger = 0;
    unsigned int secondInteger = 0;

    puts("Determine if the second integer is a multiple of the first.");

    printf("%s", "Enter first integer(-1 to end): ");
    scanf("%u", &firstInteger);

    while (firstInteger != -1)
    {
        printf("%s", "Enter second integer: ");
        scanf("%u", &secondInteger);

        unsigned int answer = isMultiple(firstInteger, secondInteger);

        if (answer)
        {
            printf("Yes... %u is a multiple of %u.", secondInteger, firstInteger);
        }
        else
        {
            printf("Sorry... %u is not a multiple of %u.", secondInteger, firstInteger);
        }

        puts("");
        puts("");
        
        printf("%s", "Enter first integer(-1 to end): ");
        scanf("%u", &firstInteger);
    }
}

unsigned int isMultiple(int firstNumber, int secondNumber)
{
    unsigned int value = 0;

    if (secondNumber % firstNumber == 0)
    {
        value = 1;
    }

    return value;
}
