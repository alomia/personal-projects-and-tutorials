// Chapter 5 - C Functions
// Exercise 5.25 - Find the Minimum
#include <stdio.h>

double findMinimum(double number1, double number2, double number3);

int main(void)
{
    double num1 = 48.90;
    double num2 = 7.93;
    double num3 = 15.74;

    printf("The smallest of the three numbers entered is %lf", findMinimum(num1, num2, num3));
    puts("");
}

double findMinimum(double number1, double number2, double number3)
{
    double minimum = number1;

    if (number2 < number3 && number2 < minimum)
    {
        minimum = number2;
    }
    else if (number3 < number2 && number3 < minimum)
    {
        minimum = number3;
    }
    
    return minimum;
}
