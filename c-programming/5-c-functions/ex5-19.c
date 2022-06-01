// Chapter 5 - C Functions
// Exercise 5.19 - Square of Asterisks
#include <stdio.h>

void squareAsterisks(int side);

int main(void)
{
    int side = 0;

    puts("Displays a solid square of asterisks");

    printf("%s", "Enter side(-1 to end): ");
    scanf("%u", &side);

    while (side > 0)
    {
        squareAsterisks(side);

        puts("");
        printf("%s", "Enter side(-1 to end): ");
        scanf("%u", &side);
    }
}

void squareAsterisks(int side)
{

    for (unsigned int column = 1; column <= side; ++column)
    {
        for (unsigned int row = 1; row <= side; ++row)
        {
            printf("%s", "*");
        }
        puts("");
    }
}
