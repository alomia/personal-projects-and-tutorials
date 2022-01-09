/* 04 - C Functions: ex04_20.c
   5.31 Coin Tossing */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip(void);

int main(void)
{
        srand(time(NULL));
        
        int heads = 0;
        int tails = 0;

        for (int launch = 1; launch <= 100; launch++)
        {
                if (flip() == 1)
                {
                        puts("Heads");
                        heads++;
                }
                else
                {
                        puts("Tails");
                        tails++;
                }
        }

        puts("\n---------------------------------\n");
        printf("%s %d\n", "Total number of heads:", heads);
        printf("%s %d\n", "Total number of tails:", tails);

        return 0;
}

int flip(void)
{
        return rand() % 2;
}

