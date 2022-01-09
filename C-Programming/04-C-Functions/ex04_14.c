/* 04 - C Functions: ex04_14.c
   Find the Minimum */
#include <stdio.h>

float findMinimum(float num1, float num2, float num3);

int main(void)
{
        float num1, num2, num3;

        puts("Find the Minimum");
        printf("%s", "Enter three floating numbers: ");
        scanf("%f%f%f", &num1, &num2, &num3);

        printf("%s%.2f\n", "The smallest number is: ", findMinimum(num1, num2, num3));

}

float findMinimum(float num1, float num2, float num3)
{
        float minimum = 0;

        if (num1 < num2 && num1 < num3)
                minimum = num1;
        else if (num2 < num1 && num2 < num3)
                minimum = num2;
        else
                minimum = num3;

        return minimum;
}
