/* 03 - Program control in c: ex03_14.c
   prints the product of odd integers from 1 to 15. */
#include <stdio.h>

int main(void)
{
        unsigned int counter;
        unsigned int product;

        for (counter = 1; counter <= 15; counter++) {

                if (counter % 2 != 0) {
                        product = counter * counter;
                        printf("Product of %u is %u\n", counter, product);
                }
        }

        return 0;
}
