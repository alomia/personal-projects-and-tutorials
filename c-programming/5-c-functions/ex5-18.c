// Chapter 5 - C Functions
// Exercise 5.18 - Even or Odd
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int isEven(int number);

int main(void)
{
    srand(time(NULL));
    unsigned int count = 1;

    while (count <= 20)
    {
        unsigned int number = 1 + (rand() % 100);
        unsigned int answer = isEven(number);

        if (answer)
        {
            printf("%u is even.", number);
        }
        else
        {
            printf("%u is odd.", number);
        }

        puts("");
        ++count;
    }
}

unsigned int isEven(int number)
{
    return number % 2 == 0;
}
