// Chapter 6 - C Arrays
// Exercise 6.19 - Dice Rolling
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 13

int rollDice(void);
void printArray(int array[], size_t size);

int main(void)
{
    srand(time(NULL));

    int count = 1;
    int diceOne = 0;
    int diceTwo = 0;
    int sumDice = 0;
    int results[SIZE] = {0};

    while (count <= 36000)
    {
        diceOne = rollDice();
        diceTwo = rollDice();
        sumDice = diceOne + diceTwo;

        ++results[sumDice];
        ++count;
    }

    printf("%s%15s\n", "Die face", "Apparitions");
    printArray(results, SIZE);
}

int rollDice(void)
{
    return 1 + rand() % 6;
}

void printArray(int array[], size_t size)
{
    for (size_t i = 2; i < size; ++i)
    {
        printf("%2ld%14d", i, array[i]);
        puts("");
    }
}
