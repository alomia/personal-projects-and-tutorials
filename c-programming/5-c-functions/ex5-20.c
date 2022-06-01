// Chapter 5 - C Functions
// Exercise 5.20 - Displaying a Square of Any Character
#include <stdio.h>

void displays_square(int side, char fillCharacter);

int main(void)
{
    int side = 0;
    char character;
    puts("Displaying a Square of Any Character");

    printf("%s", "Enter side(-1 to end): ");
    scanf("%u", &side);

    while (side > 0)
    {
        printf("%s", "Enter character: ");
        scanf(" %c", &character);

        displays_square(side, character);

        puts("");
        printf("%s", "Enter side(-1 to end): ");
        scanf("%u", &side);
    }
}

void displays_square(int side, char fillCharacter)
{

    for (unsigned int column = 1; column <= side; ++column)
    {
        for (unsigned int row = 1; row <= side; ++row)
        {
            printf("%c", fillCharacter);
        }
        puts("");
    }
}
