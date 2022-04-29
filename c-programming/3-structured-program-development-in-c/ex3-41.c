// Chapter 3 - Structured Program Development in C
// Exercise 3.41 - Diameter, Circumference and Area of a Cirle
#include <stdio.h>

int main(void)
{
    const float PI = 3.14159;
    float radius = 0;

    printf("%s ", "Enter radius(-1 to end):");
    scanf("%f", &radius);

    while (radius != -1)
    {
        float diameter = radius * 2;
        float circumference = PI * (diameter * PI);
        float area = PI * (radius * radius);

        printf("%s %.2f\n", "Diameter is", diameter);
        printf("%s %.2f\n", "Circumference is", circumference);
        printf("%s %.2f\n", "Area is", area);

        printf("\n%s ", "Enter radius(-1 to end):");
        scanf("%f", &radius);
    }
}