/* 03 - Program control in c: ex03_04.c
   prints floats as long as it is less than
   or equal to the designated value */
#include <stdio.h>

int main(void)
{
        float x;

        for (x = .000001; x <= .0001; x += .000001) {
                printf("%.7f\n", x);
        }

        return 0;
}
