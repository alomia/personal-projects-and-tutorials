// 04 - C Functions: ex04_25.c
// 5.39 Recursive Greatest Common Divisor

#include <stdio.h>

int gcd(int x, int y);

int main(void)
{
        int x = 0;
        int y = 0;

        puts("Greatest common divisor");
        printf("Enter first number: ");
        scanf("%d", &x);
        printf("Enter second number: ");
        scanf("%d", &y);
        printf("GCD is %d\n", gcd(x, y));
        return 0;
        
}

int gcd(int x, int y)
{
        if (y == 0)
        {
                return x;
        }
        else{
                return gcd(y, x%y);
        }
}

