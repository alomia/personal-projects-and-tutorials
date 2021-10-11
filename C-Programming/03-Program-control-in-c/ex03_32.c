/* 03 - Programi control in c: ex03_32.c
   Modified diamond printing program */

#include <stdio.h>

int main(void)
{
        unsigned int blankSpace;
        unsigned int counter;
        unsigned int size;
        unsigned int i, j;

        printf("%s", "Enter an integer from 1 to 19 (-1 to end): ");
        scanf("%u", &size);
        
        while (size != -1) {
               
                blankSpace = size / 2;

                for (counter = 1; counter <= size / 2 + 1; counter++) {
                        
                        for (i = 1; i <= blankSpace; i++) {
                                printf(" ");
                        }
                        
                        for (j = 1; j <= counter + counter - 1; j++) {
                                printf("*");
                        }

                        blankSpace--;
                        printf("\n");
                }
                
                blankSpace = 1;

                for (counter = size / 2; counter >= 1; counter--) {
                        
                        for (i = 1; i <= blankSpace; i++) {
                                printf(" ");
                        }

                        for (j = 1; j <= counter + counter - 1; j++) {
                                printf("*");
                        }

                        blankSpace++;
                        printf("\n");
                }
                
                printf("\n%s", "Enter an integer from 1 to 19 (-1 to end): ");
                scanf("%u", &size);
        }

        return 0;
}
