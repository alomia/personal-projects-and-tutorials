// Chapter 5 - C Functions
// Exercise 5.11 - Rounding Numbers
#include <stdio.h>
#include <math.h>

double roundToInteger(double number);
double roundToTenths(double number);
double roundToHundreths(double number);
double roundToThousandths(double number);

int main(void)
{
    double number = 0;

    printf("%s", "Enter a float number(-1 to end): ");
    scanf("%lf", &number);

    while (number != -1)
    {
        puts("");
        printf("Original number\t\t%lf\n", number);
        printf("Round to integer\t%lf\n", roundToInteger(number));
        printf("Round to tenths\t\t%lf\n", roundToTenths(number));
        printf("Round to hundreths\t%lf\n", roundToHundreths(number));
        printf("Round to thousandths\t%lf\n", roundToThousandths(number));
        
        puts("");
        printf("%s", "Enter a float number(-1 to end): ");
        scanf("%lf", &number);
    }
}


double roundToInteger(double number) {
    return (floor(number + .5));
}

double roundToTenths(double number) {
    return (floor(number * 10 + .5) / 10);
}

double roundToHundreths(double number) {
    return (floor(number * 100 + .5) / 100);
}

double roundToThousandths(double number) {
    return (floor(number * 1000 + .5) / 1000);
}
