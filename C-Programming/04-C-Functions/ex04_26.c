// 04 - C Functions: ex04_26.c
// 5.40 Recursive main

#include <stdio.h>

int main(void)
{
        static int count = 1;
        printf("%d - Recursive main\n", count);
        count++;
        main();
        return 0;
}

