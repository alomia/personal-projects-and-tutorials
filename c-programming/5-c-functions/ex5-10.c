// Chapter 5 - C Functions
// Exercise 5.10 - Rounding Numbers
#include <stdio.h>
#include <math.h>

int main(void)
{
    double x = 0;
    printf("%s", "Enter an integer(-1 to end): ");
    scanf("%lf", &x);

    while (x != -1)
    {
        double y = floor(x + .5);
        printf("Original number %.2lf\n", x);
        printf("Rounded number %.2lf\n", y);

        puts("");
        printf("%s", "Enter an integer(-1 to end): ");
        scanf("%lf", &x);
    }
}
