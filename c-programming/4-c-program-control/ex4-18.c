// Chapter 4 - C Program Control
// Exercise 4.18 - Bar-Chart Printing Program
#include <stdio.h>

int main(void)
{
    unsigned int ui1 = 0, ui2 = 0, ui3 = 0, ui4 = 0, ui5 = 0;

    printf("%s", "Enter five integers(between 1 and 30): ");
    scanf("%u%u%u%u%u", &ui1, &ui2, &ui3, &ui4, &ui5);

    if ((ui1 < 1 || ui1 > 30) || (ui2 < 1 || ui2 > 30) ||
        (ui3 < 1 || ui3 > 30) || (ui4 < 1 || ui4 > 30) ||
        (ui5 < 1 || ui5 > 30))
    {
        printf("%s", "Sorry, you have entered a number less than 1 or greater than 30.");
        puts("");
    }
    else
    {
        for (unsigned int count = 1; count <= ui1; ++count)
            printf("%s", "*");

        puts("");

        for (unsigned int count = 1; count <= ui2; ++count)
            printf("%s", "*");

        puts("");

        for (unsigned int count = 1; count <= ui3; ++count)
            printf("%s", "*");

        puts("");

        for (unsigned int count = 1; count <= ui4; ++count)
            printf("%s", "*");

        puts("");

        for (unsigned int count = 1; count <= ui5; ++count)
            printf("%s", "*");

        puts("");
    }
}
