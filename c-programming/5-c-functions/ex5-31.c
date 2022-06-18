// Chapter 5 - C Functions
// Exercise 5.31 - Coin Tossing
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int flip();

int main(void)
{
    srand(time(NULL));

    unsigned int heads = 0;
    unsigned int tails = 0;

    for (unsigned int flipCoin = 1; flipCoin <= 100; flipCoin++)
    {
        unsigned int coinTossResult = flip();

        if (coinTossResult)
        {
            ++heads;
        }
        else
        {
            ++tails;
        }
    }

    printf("Heads %u", heads);
    puts("");

    printf("Tails %u", tails);
    puts("");
}

unsigned int flip()
{
    return rand() % 2;
}
