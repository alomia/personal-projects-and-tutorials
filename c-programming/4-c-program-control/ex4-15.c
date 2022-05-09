// Chapter 4 - C Program Control
// Exercise 4.15 - Modified Compound-Interest Program
#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal = 1000.0;

    printf("%4s%21s\n", "Year", "Amount on deposit");

    for (double rate = .05; rate <= .10; rate += .01)
    {
        puts("");
        printf("Interest rate of %.2f%c", rate, '%');
        puts("");

        for (unsigned int year = 1; year <= 10; ++year)
        {

            double amount = principal * pow(1.0 + rate, year);

            printf("%4u%21.2f\n", year, amount);
        }
    }
}
