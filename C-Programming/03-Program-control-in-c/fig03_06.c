/* 03 - Program control in c: fig03_06.c
   Using the do...while iteration statement. */
#include <stdio.h>

int main(void)
{
        unsigned int counter = 1;
        
        do {
                printf("%u ", counter);
        } while (++counter <= 10);

        return 0;
}
