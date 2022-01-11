/* 04 - C Functions: ex04_24.c
   5.35 fibonacci */

#include <stdio.h>

unsigned long  long int fibonacci(unsigned int n);

int main(void)
{
        for (unsigned  long long int n = 0; n <= 30; n++) {
                printf("Fibonacci(%lld)  = %lld\n", n, fibonacci(n));
        }
        return 0;
}

unsigned long  long int fibonacci(unsigned int n)
{
        int f = 1;
        int f1 = 0;
        int f2 = 1;

        if (n == 0)
                f = 0;
        else {
                for (int count = 1; count < n; count++) {
                        f = f1 + f2;
                        f1 = f2;
                        f2 = f;
                }
        }

        return f;
}

