// Chapter 5 - C Functions
// Exercise 5.31 - Guess the Number
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status
{
    END = 0,
    CONTINUE = 1,
};

unsigned int generateNumber();

int main(void)
{
    srand(time(NULL));

    char playAgain;
    unsigned int number = 0;
    unsigned int gameStatus = CONTINUE;
    unsigned int guess = generateNumber();

    puts("I have a number between 1 and 1000.");
    puts("Can you guess my number?");
    puts("Please type your first guess.");

    while (gameStatus)
    {
        printf("Type your guess: ");
        scanf("%u", &number);

        if (number == guess)
        {
            puts("Excellent! You guessed the number!");
            puts("Would you like to play again (y or n)?");
            printf("Type your guess: ");
            scanf(" %c", &playAgain);

            if (playAgain == 'y' || playAgain == 'Y')
            {
                guess = generateNumber();
            }
            else if (playAgain == 'n' || playAgain == 'N')
            {
                gameStatus = END;
            }
        }
        else if (number < guess)
        {
            puts("Too low. Try again.");
        }
        else
        {
            puts("Too high. Try again.");
        }
        puts("");
    }
}

unsigned int generateNumber()
{
    unsigned int number = 0;
    number = 1 + (rand() % 1000);
    return number;
}
