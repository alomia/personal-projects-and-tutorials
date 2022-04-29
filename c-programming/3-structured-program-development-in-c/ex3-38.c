// Chapter 3 - Structured Program Development in C
// Exercise 3.38 - Counting 7s
#include <stdio.h>

int main(void)
{
    unsigned int number = 0;

    printf("%s ", "Enter an integer of 5 digits or less(-1 o end):");
    scanf("%d", &number);

    while (number != -1)
    {
        if (number > 99999)
        {
            puts("Integer contains more than 5 digits.");
            printf("\n%s ", "Enter an integer of 5 digits or less(-1 o end):");
            scanf("%d", &number);
            continue;
        }

        unsigned int sevens = 0, digit = 0;

        for (unsigned int count = 1; count <= 5; count++)
        {
            digit = number % 10;
            number = number / 10;

            if (digit == 7)
                ++sevens;
        }

        printf("%d digits of integer are 7s.", sevens);
        puts("");

        printf("\n%s ", "Enter an integer of 5 digits or less(-1 o end):");
        scanf("%d", &number);
    }
}