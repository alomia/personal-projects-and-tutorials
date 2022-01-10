/* 04 - C Functions: ex04_21.c
   5.32 Guess the Number */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
        srand(time(NULL));
        int numberToGuess = rand() % (1000 + 1);
        int number = 0;
        puts("I have a number between 1 and 1000.");
        puts("Can you guess my number?");
        puts("Please type your first guess.");

        while (1) {

                printf("\n%s", "Enter number: ");
                scanf("%d", &number);

                if (number == numberToGuess) {
                        char y_or_n;

                        puts("\nExcellent! You guessed the number!");
                        printf("%s", "Would you like to play again (y or n)? ");
                        scanf(" %c", &y_or_n);
                        if (y_or_n == 'y')
                                numberToGuess = rand() % (1000 + 1);
                        else
                                break;
                }
                else if (number < numberToGuess)
                        puts("\nToo low. Try again.");
                else if (number > numberToGuess)
                        puts("\nToo high. Try again.");
        }

        return 0;
}

