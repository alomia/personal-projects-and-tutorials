/* 04 - C Functions: fig04_05.c
   Randomizing the die-rolling program. */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        unsigned int seed;

        printf("%s", "Enter seed: ");
        scanf("%u", & seed);
        
        srand(seed);

        for ( unsigned int i = 1; i <= 10; i++) {
               printf("%10d", 1 + (rand() % 6));

               if (i % 5 == 0) {
                       puts("");
               }
        }

        return 0;
}
