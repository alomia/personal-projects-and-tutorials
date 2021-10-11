/* 03 - Program control in c: ex03_15.c
   prints the factorial of the integers from 1 to 5,
   you can increase the number of factorials to be evaluated. */
#include <stdio.h>

int main(void)
{
        unsigned int n;
        unsigned int counter;
        long int factorial = 1;

        puts("Factorial");

        for (n = 1; n <= 5; n++) {
                printf("%u!\t", n);
                
                for (counter = 1; counter <= n; counter++) {
                        factorial *= counter;
                }

                printf("%li\n", factorial);

                factorial = 1;
        }

        return 0;
}
