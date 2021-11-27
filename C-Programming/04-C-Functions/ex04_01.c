/* 04 - C Functions: ex04_01.c
   Displays the value of x after
   performing each of the following instructions. */
#include <stdio.h>
#include <math.h>

int main(void)
{
        int x;

        x = fabs(7.5);
        printf("%s %d\n","a) The absolute value of 7.5 is", x);
        
        x = floor(7.5);
        printf("%s %d\n", "b) floor of 7.5 is", x);

        x = fabs(0.0);
        printf("%s %d\n","c) The absolute value of 0.0 is", x);

        x = ceil(0.0);
        printf("%s %d\n","d) ceil of 0.0 is", x);

        x = fabs(-6.4);
        printf("%s %d\n","e) The absolute value of -6.4 is", x);

        x = ceil(-6.4);
        printf("%s %d\n","f) ceil of -6.4 is", x);

        x = ceil( -fabs( -8 + floor(-5.5)));
        printf("%s %d\n","g) ceil of -14 is", x);

        return 0;
}