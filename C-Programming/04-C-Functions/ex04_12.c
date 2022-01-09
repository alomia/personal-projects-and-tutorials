/* 04 - C Functions: ex04_12.c
   produce a program that graphs a wide range of shapes. */
#include <stdio.h>

void square(int side, char fillCharacter);
void circle(int side, char fillCharacter);
void triangle(int side, char fillCharacter);

int main(void)
{
        puts("SQUARE:");
        square(5, '*');

        puts("CIRCLE:");
        circle(5, '*');

        puts("TRIANGLE:");
        triangle(5, '*');

        return 0;
}

void square(int side, char fillCharacter)
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

void circle(int side, char fillCharacter)
{
         int height, width, space, character;
         
         for (height = 1; height <= side; height++)
         {
                 if (height == 1 || height == side)
                 {
                        printf(" ");

                         for (character = 1; character <= side / 1.5; character++)
                         {
                                printf("%c", fillCharacter);
                         }
                 }
                 else {
                        for (character = 1; character<= side; character++)
                        {
                                printf("%c", fillCharacter);
                        }
                 }
                 puts(" ");
         }
}

void triangle(int side, char fillCharacter)
{
        int height, width, space, character;
        space = side - 1;
        character = 1;

        for (height = 1; height <= side; height++)
        {
                for (int counSpace = 1; counSpace <= space; counSpace++)
                {
                        printf(" ");
                }
                for (width = 1; width <= character; width++)
                {
                        printf("%c ", fillCharacter);
                }
                puts("");
                space --;
                character++;
        }
}
