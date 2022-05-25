// Chapter 5 - C Functions
// Exercise 5.15 - Hypotenuse Calculations
#include <stdio.h>
#include <math.h>

enum State
{
    FINISH = -1
};

double hypotenuse(double a, double b);

int main(void)
{
    double first_side = 0;
    double second_side = 0;

    printf("%s", "Enter first side(-1 to end): ");
    scanf("%lf", &first_side);

    while (first_side != FINISH)
    {
        printf("%s", "Enter second side: ");
        scanf("%lf", &second_side);

        printf("Length of hypotenuse is %.2lf", hypotenuse(first_side, second_side));
        puts("");
        puts("");

        printf("%s", "Enter first side(-1 to end): ");
        scanf("%lf", &first_side);
    }
}

double hypotenuse(double a, double b)
{
    return sqrt(pow(a, 2) + pow(b, 2));
}
