// Chapter 2 - Introduction to C Programming
// Exercise 2.32 - Body Mass Index Calculator
#include <stdio.h>

int main(void)
{
    double weight = 0, height = 0;

    printf("%s", "Enter your weight(kg): ");
    scanf("%lf", &weight);
    printf("%s", "Enter your height(cm): ");
    scanf("%lf", &height);

    const double BMI = weight / ((height / 100) * (height / 100));

    printf("\nBMI = %.1f kg/m2\n", BMI);

    puts("\nBMI VALUES");
    puts("Underweight: less than 18.5");
    puts("Normal:      between 18.5 and 24.9");
    puts("Overweight:  between 25 and 29.9");
    puts("Obese:       30 or greater");
}