/* 03 - Program control in c: ex03_06.c
   should output the even integers from 2 to 100 */
#include <stdio.h>

int main(void)
{
        int counter = 2;

        do {

                if (counter % 2 == 0) {
                        printf("%u\n", counter);
                }

                counter += 2;

        } while (counter < 100);

        return 0;
}
