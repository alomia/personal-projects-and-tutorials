/* 04 - C Functions: ex04_04.c
   For each value read, the program prints the original value,
   the number rounded to the nearest integer,
   the number rounded to the nearest tenth,
   the number rounded to the nearest hundredth and the number rounded to the nearest thousandth.*/

/*************************************************************
 * If you have compilation problems, use the following line: *
 * gcc ex04_04.c -lm -o ex04_04                              *
 * This will tell gcc to link the code to the math library.  *
 *************************************************************/

#include <stdio.h>
#include <math.h>

float roundToInteger(float number);
float roundToTenths(float number);
float roundToHundreths(float number);
float roundToThousandths(float number);

int main(void)
{
        float number;
        printf("%s", "Enter number: ");
        scanf("%f", &number);

        printf("\n%s%15.3f\n", "Original value: ", number);

        printf("%s%13.3f\n", "Round to integer: ", roundToInteger(number));
        
        printf("%s%14.3f\n", "Round to tenths: ", roundToTenths(number));
        
        printf("%s%11.3f\n", "Round to hundreths: ", roundToHundreths(number));
        
        printf("%s%9.3f\n", "Round to thousandths: ", roundToThousandths(number));

        return 0;
}

float roundToInteger(float number)
{
        float y;

        y = floor(number + .5);

        return y;
}

float roundToTenths(float number)
{
        float y;

        y = floor(number * 10 + .5) / 10;

        return y;

}

float roundToHundreths(float number)
{
        float y;

        y = floor(number * 100 + .5) / 100;

        return y;
}

float roundToThousandths(float number)
{
        float y;

        y = floor(number * 1000 + .5) / 1000;

        return y;
}
