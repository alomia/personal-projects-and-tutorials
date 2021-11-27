/* 04 - C Functions: ex04_02.c
   The program should use the function calculateCharges to determine
   the charge for each customer. */
#include <stdio.h>

float calculateCharges( float hours);

int main(void)
{
        float hours_1 = 1.5;
        float hours_2 = 4.0;
        float hours_3 = 24.0;
        float totalCharges;
        float totalHours;

        printf("%4s%13s%13s\n", "Car", "Hours", "Charge");
        printf("%2d%15.1f%13.2f\n", 1, hours_1, calculateCharges(hours_1));
        printf("%2d%15.1f%13.2f\n", 2, hours_2, calculateCharges(hours_2));
        printf("%2d%15.1f%13.2f\n", 3, hours_3, calculateCharges(hours_3));

        totalCharges = calculateCharges(hours_1) + calculateCharges(hours_2) + calculateCharges(hours_3);
        totalHours = hours_1 + hours_2 + hours_3;

        printf("%6s%11.1f%13.2f\n", "TOTAL", totalHours, totalCharges);
}

float calculateCharges(float hours)
{
        float charges = 0;

        if (hours >= 1 & hours <= 3)
        {
                charges = 2.00;
        }
        else if (hours > 3 & hours <= 23)
        {

                charges = 2.00;

                for (int i = 3; i < hours; i++)
                {
                        charges += 0.50;
                }
                
        }
        else if (hours >= 24) {
                charges =10.00;
        }

        return charges;
}