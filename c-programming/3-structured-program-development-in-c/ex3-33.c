// Chapter 3 - Structured Program Development in C
// Exercise 3.33 - Hollow Square of Asterisks
#include <stdio.h>

int main(void)
{
    unsigned int side = 0;

    printf("%s ", "Enter side of square (-1 to end):");
    scanf("%d", &side);

    while (side != -1)
    {
        if (side < 0 || side > 20)
        {
            puts("Please enter a valid value.");

            printf("\n%s ", "Enter side of square (-1 to end):");
            scanf("%d", &side);
            continue;
        }

        for (unsigned int column = 1; column <= side; column++)
        {
            for (unsigned int row = 1; row <= side; row++)
            {
                if (column == 1 || column == side)
                {
                    printf("%c", '*');
                }
                else
                {
                    if (row == 1 || row == side)
                    {
                        printf("%c", '*');
                        continue;
                    }
                    else
                    {
                        printf("%c", ' ');
                    }
                }
            }
            puts("");
        }

        printf("\n%s ", "Enter side of square (-1 to end):");
        scanf("%d", &side);
    }
}