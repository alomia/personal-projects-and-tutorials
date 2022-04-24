// Chapter 3 - Structured Program Development in C
// Exercise 3.16 - Gas Mileage
#include <stdio.h>

int main(void)
{
    float gallonsUsed = 0, milesPerGallon = 0, totalMilesPerGallon = 0;
    int milesDriven = 0, count = 0;

    while (1)
    {
        printf("%s ", "Enter the gallons used (-1 to end):");
        scanf("%f", &gallonsUsed);

        if (gallonsUsed == -1)
        {
            break;
        }

        printf("%s ", "Enter the miles driven:");
        scanf("%d", &milesDriven);

        milesPerGallon = milesDriven / gallonsUsed;
        totalMilesPerGallon += milesPerGallon;

        printf("The miles/gallon for this tank was %f\n\n", milesPerGallon);

        count++;
    }

    printf("\nThe overall average miles/gallon was %f\n", totalMilesPerGallon / count);
}