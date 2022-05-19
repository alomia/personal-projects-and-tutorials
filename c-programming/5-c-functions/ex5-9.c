// Chapter 5 - C Functions
// Exercise 5.9 - Parking Charges
#include <stdio.h>

double calculateCharges(double hours);

int main(void)
{
    double hours = 0;
    double totalHours = 0;
    double totalCharge = 0;

    printf("%s\t%s\t%s\n", "Car", "Hours", "Charge");

    hours = 1.5;
    printf("%u\t%5.1lf\t%6.2lf\n", 1, hours, calculateCharges(hours));
    totalHours += hours;
    totalCharge += calculateCharges(hours);

    hours = 4;
    printf("%u\t%5.1lf\t%6.2lf\n", 2, hours, calculateCharges(hours));
    totalHours += hours;
    totalCharge += calculateCharges(hours);

    hours = 24;
    printf("%u\t%5.1lf\t%6.2lf\n", 3, hours, calculateCharges(hours));
    totalHours += hours;
    totalCharge += calculateCharges(hours);

    printf("%s\t%5.1lf\t%6.2lf\n", "TOTAL", totalHours, totalCharge);
}

double calculateCharges(double hours)
{
    double charge = 2.00;

    if (hours > 23)
    {
        charge = 10;
    }

    if (hours > 3 && hours < 24)
    {
        for (unsigned int i = 1; i <= hours - 3; i++)
        {
            charge += 0.50;
        }
    }

    return charge;
}
