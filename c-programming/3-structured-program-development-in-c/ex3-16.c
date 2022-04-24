// Chapter 3 - Structured Program Development in C
// Exercise 3.16 - Gas Mileage
#include <stdio.h>

int main(void)
{
    float gallonsUsed = 0, milesDriven = 0, milesPerGallon = 0, totalMilesPerGallon = 0;
    int count = 0;

    printf("%s ", "Enter the gallons used (-1 to end):");
    scanf("%f", &gallonsUsed);

    while (gallonsUsed != -1)
    {
        printf("%s ", "Enter the miles driven:");
        scanf("%f", &milesDriven);

        milesPerGallon = milesDriven / gallonsUsed;
        totalMilesPerGallon += milesPerGallon;

        printf("The miles/gallon for this tank was %f\n", milesPerGallon);

        printf("\n%s ", "Enter the gallons used (-1 to end):");
        scanf("%f", &gallonsUsed);

        ++count;
    }

    printf("\nThe overall average miles/gallon was %f\n", totalMilesPerGallon / count);
}