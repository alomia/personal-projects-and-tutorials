/* 04 - C Functions: ex04_11.c
   prints a solid square of the entered character,
   whose dimensions are specified by the side parameter. */

#include <stdio.h>

void squareOfCharacter(int side, char fillCharacter);

int main(void)
{
        int side = 0;
        char character;

        puts("DISPLAYING A SQUARE OF ANY CHARACTER");
        puts("Enter -1 or any other negative number to exit the program.");
        
        while (1) {

                printf("\nSide: ");
                scanf("%d", &side);
                
                if (side <= -1 )
                        break;

                printf("Character: ");
                scanf(" %c", &character);
                
                squareOfCharacter(side, character);
        }
        
        printf("\nGoodbye come back soon (︡❛ ͜ʖ❛︠)\n");

        return 0;
}

void squareOfCharacter(int side, char fillCharacter)
{
        int height, width;

        for (height = 1; height <= side; height++)
        {
                for (width = 1; width <= side; width++) {
                        printf("%c", fillCharacter);
                }
                puts("");
        }
}
