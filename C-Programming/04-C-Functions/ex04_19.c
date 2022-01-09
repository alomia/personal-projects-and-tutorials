/* 04 - C Functions: ex04_19.c
   5.30 Quality Points for Student’s Grades */

#include <stdio.h>

int toQualityPoints(float average);

int main(void)
{
        float average;
        printf("%s", "Enter your average(-1 to end): ");
        scanf("%f", &average);
        while (average != -1) {
                printf("%s %d\n", "its average is", toQualityPoints(average));
                printf("\n%s", "Enter your average(-1 to end): ");
                scanf("%f", &average);
        }
}

int toQualityPoints(float average)
{
        if (average >= 90)
                average = 4;
        else if (average >= 80)
                average = 3;
        else if (average >= 70)
                average = 2;
        else if (average >= 60)
                average = 1;
        else
                average = 0;

        return average;
}

