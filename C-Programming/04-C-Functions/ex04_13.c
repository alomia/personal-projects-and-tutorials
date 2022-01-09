/* 04 - C Functions: ex04_13.c
   Temperature Conversions - integer */
#include <stdio.h>

int toCelsius(int temperatureCelsius);
int toFahrenheit(int temperatureFahrenheit);

int main(void)
{
        printf("%s%15s%11s\n", "Celsius", "Fahrenheit", "Celsius");
        for (int count = 0; count <= 100; count++)
        {
                printf("%3d°C%5c%6d°F%5c%6d°C\n", count, '=',toCelsius(count), '=', toFahrenheit(toCelsius(count)));
        }
}

int toCelsius(int temperatureCelsius)
{
        int fahrenheit = (temperatureCelsius * 9/5) + 32;
        return fahrenheit;
}

int toFahrenheit(int temperatureFahrenheit)
{
        int celsius = (temperatureFahrenheit - 32) * 5/9;
        return celsius;
}
