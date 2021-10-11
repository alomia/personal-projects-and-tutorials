/* 03 - Program control in c: ex03_08.c
   Display of different sequences of values using for. */
#include <stdio.h>

int main(void)
{
        int x;
        
        /*imprime los enteros menores o iguales a 7.*/
        
        printf("a) ");

        for (x = 1; x <= 7; x++) {

                printf("%d", x);

                if (x != 7)
                        printf(", ");      
        }

        printf("\n");

        /*prints integers less than or equal to 23. (increases the current value plus 5)*/
        
        printf("b) ");

        for (x = 3; x <= 23; x += 5) {

                printf("%d", x);

                if (x != 23)
                        printf(", ");      
        }

        printf("\n");
        
        /*prints integers greater than or equal to -10. (the value decreases by -6 )*/
        
        printf("c) ");

        for (x = 20; x >= -10; x -= 6) {

                printf("%d", x);

                if (x != -10)
                        printf(", ");      
        }

        printf("\n");
        
        /*prints integers less than or equal to 51. (the value is incremented by 8)*/
        
        printf("d) ");

        for (x = 19; x <= 51; x += 8) {

                printf("%d", x);

                if (x != 51)
                        printf(", ");      
        }

        printf("\n");

        return 0;
}
