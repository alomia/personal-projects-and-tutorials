/* 04 - C Functions: ex04_22.c
   5.33 Guess the Number Modification */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
        srand(time(NULL));
        int numberToGuess = rand() % (1000 + 1);
        int number = 0;
        int attempts = 0;
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
                } else {
                        if (number < numberToGuess)
                                puts("\nToo low. Try again.");
                        else
                                puts("\nToo high. Try again.");

                        attempts++;
                }
        }

        if (attempts < 10)
                printf("\n%s\n", "Either you know the secret or you got lucky!");
        else if (attempts == 10)
                printf("\n%s\n", "Ahah! You know the secret!");
        else if (attempts > 10)
                printf("\n%s\n", "You should be able to do better!");

        return 0;
}

