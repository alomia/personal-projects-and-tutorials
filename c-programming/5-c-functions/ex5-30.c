// Chapter 5 - C Functions
// Exercise 5.30 - Quality Points for Student’s Grades
#include <stdio.h>

unsigned int toQualityPoints(unsigned int average);

int main(void)
{
    unsigned int average = 0;

    printf("%s", "Enter average: ");
    scanf("%u", &average);

    printf("Your points are %u", toQualityPoints(average));
    puts("");
}

unsigned int toQualityPoints(unsigned int average)
{
    unsigned int points = 0;

    if (average >= 90)
    {
        points = 4;
    }
    else if (average >= 80)
    {
        points = 3;
    }
    else if (average >= 70)
    {
        points = 2;
    }
    else if (average >= 60)
    {
        points = 1;
    }

    return points;
}
