/* 03 - Programi control in c: ex03_31.c
   Print Diamond Pattern */
#include <stdio.h>

int main(void)
{
        unsigned int i;
        unsigned int j;
        unsigned int counter;
        unsigned int blankSpace = 4;
        
        //print the first part of the pattern
        for (counter = 1; counter <= 5; counter++) {

                for (i = 1; i <= blankSpace; i++) {
                        printf(" ");
                }

                for (j = 1; j <= counter + counter - 1; j++) {
                        printf("*");
                }

                blankSpace--;
                printf("\n");
        }

        //print the second part of the pattern
        blankSpace = 1;
        for (counter = 4; counter >= 1; counter--) {

                for (i = 1; i <= blankSpace; i++) {
                        printf(" ");
                }

                for (j = 1; j <= counter + counter - 1; j++) {
                        printf("*");
                }

                blankSpace++;
                printf("\n");
        }

        return 0;
}
