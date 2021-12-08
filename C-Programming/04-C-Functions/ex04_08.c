/* 04 - C Functions: ex04_08.c
   to know if a number is a multiple of another number,
   the function returns 1 if it is true and 0 if it is not. */

#include <stdio.h>

int isMultiple(int number, int multiple);

int main(void)
{
        int number, multiple;
        printf("%s\n\n", "M U L T I P L E S");

        printf("%s", "Enter integer: ");
        scanf("%d", &number);
        
        printf("%s", "Enter multiple: ");
        scanf("%d", &multiple);
        
        if (isMultiple(number, multiple) == 1) {
                printf("\n%d is a multiple of %d.\n", multiple, number);
        }
        else {
                 printf("\n%d is not a multiple of %d.\n", multiple, number); 
        }

        return 0;
}

int isMultiple(int number, int multiple)
{
        int value = 0;

        if (((multiple / number) * number) == multiple)
                value = 1;

        return value;
}
