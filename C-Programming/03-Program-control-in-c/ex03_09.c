/* 03 - Program control in c: ex03_09.c
   prints the character 'x' for 'y' for 'x'. */
#include <stdio.h>

int main(void)
{
        unsigned int x;
        unsigned int y;

        printf("%s", "Enter two unsigned integers in the range 1-20: ");
        scanf("%u%u", &x, &y);

        for (unsigned int i = 1; i <= y; ++i) {

                for (unsigned int j = 1; j <= x; ++j) {
                       printf("%s", "@");
                }

                puts("");
        }
}
