/* 04 - C Functions: ex04_03.c
   Program that reads several numbers and uses the floor function
   to round these numbers to the nearest integer. */

/*************************************************************
 * If you have compilation problems, use the following line: *
 * gcc ex04_03.c -lm -o ex04_03                              *
 * This will tell gcc to link the code to the math library.  *
 *************************************************************/

#include <stdio.h>
#include <math.h>

int main(void)
{
        float x;
        printf("%s", "Enter number(-1 to end): ");
        scanf("%f", &x);

        while (x != -1)
        {
                float y = 0;
                
                y = floor(x + .5);
                
                printf("\n%s%20s\n", "Original number", "Rounded number");
                printf("%.1f%21.1f\n", x, y);

                printf("\n%s", "Enter number(-1 to end): ");
                scanf("%f", &x);
        }
        
        return 0;
}