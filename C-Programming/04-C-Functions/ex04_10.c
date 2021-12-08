/* 04 - C Functions: ex04_07.c
   prints a solid square of asterisks whose dimensions are
   specified by the side parameter. */

#include <stdio.h>

void squareOfAsterisks(int side);

int main(void)
{
        int side = 0;

        puts("SQUARE OF ASTERISKS");
        puts("Enter -1 or any other negative number to exit the program.");

        printf("\nSide: ");
        scanf("%d", &side);

        while (side > -1) {
                squareOfAsterisks(side);
                
                printf("\nSide: ");
                scanf("%d", &side);
        }
        
        printf("\nGoodbye come back soon (︡❛ ͜ʖ❛︠)\n");
}

void squareOfAsterisks(int side)
{
        int height, width;

        for (height = 1; height <= side; height++)
        {
                for (width = 1; width <= side; width++) {
                        printf("*");
                }
                puts("");
        }
}
