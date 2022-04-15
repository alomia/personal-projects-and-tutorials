// Chapter 2 - Introduction to C Programming
// Exercise 2.20 - Diameter, Circumference and Area of a Circle
#include <stdio.h>

int main(void)
{
    const float PI = 3.14159;
    float radius = 0;

    printf("%s", "Enter radius: ");
    scanf("%f", &radius);

    printf("%s %.2f\n", "Diameter is", radius * 2);
    printf("%s %.2f\n", "Circumference is", PI * (radius * 2));
    printf("%s %.2f\n", "Area is", PI * (radius * radius));
}