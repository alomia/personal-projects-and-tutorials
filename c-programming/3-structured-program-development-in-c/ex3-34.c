// Chapter 3 - Structured Program Development in C
// Exercise 3.34 - Palindrome Tester
#include <stdio.h>

int main(void)
{
    unsigned int number = 0, digit_1 = 0, digit_2 = 0, digit_3 = 0, digit_4 = 0, digit_5 = 0;

    printf("%s ", "Enter a five-digit integer(-1 to end):");
    scanf("%d", &number);

    while (number != -1)
    {
        if (number < 99 || number < 999 || number < 9999 || number > 99999)
        {
            puts("Please enter a valid value.");
            printf("\n%s ", "Enter a five-digit integer:");
            scanf("%d", &number);
            continue;
        }

        digit_1 = number / 10000;
        number = number % 10000;

        digit_2 = number / 1000;
        number = number % 1000;

        digit_3 = number / 100;
        number = number % 100;

        digit_4 = number / 10;
        number = number % 10;

        digit_5 = number;

        if (digit_1 == digit_5 && digit_2 == digit_4)
            puts("Is a palindrome");
        else
            puts("Not a palindrome");

        printf("\n%s ", "Enter a five-digit integer:");
        scanf("%d", &number);
    }
}