/* 04 - C Functions: fig04_06.c
   Simulating the game of craps. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};

int rolldice(void);

int main(void)
{
        srand(time(NULL));
        
        int myPoint;
        enum Status gameStatus;
        int sum = rolldice();
        
        switch (sum) {
                case 7:
                case 11:
                        gameStatus = WON;
                        break;
                case 2:
                case 3:
                case 12:
                        gameStatus = LOST;
                        break;
                default:
                        gameStatus = CONTINUE;
                        myPoint = sum;
                        printf("Point is %d\n", myPoint);
                        break;
        }

        while (CONTINUE == gameStatus) {
                sum = rolldice();

                if (sum == myPoint)
                {
                        gameStatus = WON;
                }
                else
                {
                        if (7 == sum)
                        {
                                gameStatus = LOST;
                        }
                }
        }
        
        if (WON == gameStatus)
        {
                puts("Player wins");
        }
        else
        {
                puts("Player loses");
        }
}

int rolldice(void)
{
        int die1 = 1 + (rand() % 6);
        int die2 = 1 + (rand() % 6);
        
        printf("Player rolled %d + %d = %d\n", die1,  die2, die1 + die2);
        return (die1 + die2);
}
