// Chapter 5 - C Functions
// Exercise 5.8 - Show the value of x after each of the
// following statements is performed
#include <stdio.h>
#include <math.h>

int main(void)
{
    double x;

    x = fabs(7.5);
    printf("%lf\n", x);

    x = floor(7.5);
    printf("%lf\n", x);

    x = fabs(0.0);
    printf("%lf\n", x);

    x = ceil(0.0);
    printf("%lf\n", x);

    x = fabs(-6.4);
    printf("%lf\n", x);

    x = ceil(-6.4);
    printf("%lf\n", x);

    x = ceil(-fabs(-8 + floor(-5.5)));
    printf("%lf\n", x);
}
