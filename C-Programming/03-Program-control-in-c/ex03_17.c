/* 03 - Programi control in c: ex03_17.c
   Triangle printing program. */
#include <stdio.h>

int main(void)
{
        unsigned int countHeight;
        unsigned int countWidth;
        unsigned int blankSpace = 0;

        puts("(A)");

        for (countHeight = 1; countHeight <= 10; countHeight++) {

                for (countWidth = 1; countWidth <= countHeight; countWidth++) {
                        printf("%s", "*");
                }

                puts("");
        }
        
        puts("(B)");

        for (countHeight = 10; countHeight >= 1; countHeight--) {
                
                for (countWidth = 1; countWidth <= countHeight; countWidth++) {
                        printf("%s", "*");
                }
                
                puts("");
        }
        
        puts("(C)");
        
        for (countHeight = 10; countHeight >= 1; countHeight--) {

                for (unsigned int i = 0; i < blankSpace; i++) {
                        printf(" ");
                }

                for (countWidth = 1; countWidth <= countHeight; countWidth++) {
                        printf("%s", "*");
                }
                
                blankSpace++;
                puts("");
        }


        puts("(D)");

        for (countHeight = 1; countHeight <= 10; countHeight++) {
                
                for (unsigned int i = 1; i <= blankSpace - 1; i++) {
                        printf(" ");
                }

                for (countWidth = 1; countWidth <= countHeight; countWidth++) {
                        printf("%s", "*");
                }

                blankSpace--;
                puts("");
        }

        return 0;
}
