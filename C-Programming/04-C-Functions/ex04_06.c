/* 04 - C Functions: ex04_06.c
   calculate the length of the hypotenuse of a right triangle
   when the other two sides are given. */

/*************************************************************
 * If you have compilation problems, use the following line: *
 * gcc ex04_06.c -lm -o ex04_06                              *
 * This will tell gcc to link the code to the math library.  *
 *************************************************************/

#include <stdio.h>
#include <math.h>

double hypotenuse(double side_1, double side_2);

int main(void)
{
        printf("%s%10s%10s%10s\n", "Triangle", "Side 1", "Side 2", "Result");
        printf("%2d%14.1lf%10.1lf%11.2lf\n", 1, 3.0, 4.0, hypotenuse(3.0, 4.0));
        printf("%2d%14.1lf%10.1lf%11.2lf\n", 2, 5.0, 12.0, hypotenuse(5.0, 12.0));
        printf("%2d%14.1lf%10.1lf%11.2lf\n", 3, 8.0, 15.0, hypotenuse(8.0, 15.0));

        return 0;
}

double hypotenuse(double side_1, double side_2)
{
        double hypotenuse;

        hypotenuse = sqrt( pow(side_1, 2) + pow(side_2, 2) );

        return hypotenuse;
}
