/* 04 - C Functions: ex04_04.c
   aassign random integers to the variable n in the following ranges */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomIntegers(int MIN, int MAX);

int main(void)
{
        int n;
        
        n = randomIntegers(1, 2);
        printf("%s\n%d\n", "1 ≤ n ≤ 2", n);
        
        n = randomIntegers(1, 100);
        printf("\n%s\n%d\n", "1 ≤ n ≤ 100", n);
        
        n = randomIntegers(0, 10);
        printf("\n%s\n%d\n", "0 ≤ n ≤ 9", n);

        n = randomIntegers(1000, 1112);
        printf("\n%s\n%d\n", "1000 ≤ n ≤ 1112", n);

        n = randomIntegers(-1, 1);
        printf("\n%s\n%d\n", "-1 ≤ n ≤ 1", n);

        n = randomIntegers(-3, 11);
        printf("\n%s\n%d\n", "-3 ≤ n ≤ 11", n);

        return 0;
}

int randomIntegers(int MIN, int MAX)
{
        srand(time(NULL));

        return MIN + (rand() % MAX);
}
