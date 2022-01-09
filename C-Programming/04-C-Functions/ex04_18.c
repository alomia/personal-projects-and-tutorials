/* 04 - C Functions: ex04_18.c
   5.29 Greatest Common Divisor */

#include <stdio.h>

int gcd(int num_1, int num_2);

int main(void)
{
        printf("GCD is: %d\n", gcd(85, 10));

        return 0;
}

int gcd(int num_1, int num_2)
{
        int gcd = 0;
        int count = 1;
        while (count <= num_1 && count <= num_2)
        {
                if (num_1 % count == 0 && num_2 % count == 0)
                {
                        gcd = count;
                }
                count++;
        }
        return gcd;
}
