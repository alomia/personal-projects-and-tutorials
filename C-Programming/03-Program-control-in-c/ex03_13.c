/* 03 - Program control in c: ex03_13.c
   imprimir la suma de los enteros pares de 2 a 30. */
#include <stdio.h>

int main(void)
{
        unsigned int counter;
        unsigned int total = 0;

        for (counter = 2; counter <= 30; counter++) {

                if (counter % 2 == 0) {
                        total += counter;
                }
        }

        printf("Sum is %u\n", total);

        return 0;
}
