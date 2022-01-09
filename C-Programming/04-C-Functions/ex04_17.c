/* 04 - C Functions: ex04_17.c
   5.28 Reversing Digits */

#include <stdio.h>

int reversingDigits(int digits);

int main(void)
{
        int digits;
        puts("Reversing Digits");
        
        printf("%s", "Enter digits: ");
        scanf("%d", &digits);

        printf("%d\n", reversingDigits(digits));
}

int reversingDigits(int digits)
{
        int reverse = 0;
        int part = 0;

        while ( digits > 1) {
                part = digits % 10;
                reverse = reverse * 10 + part;
                digits /= 10;
        }

        return reverse;
}

