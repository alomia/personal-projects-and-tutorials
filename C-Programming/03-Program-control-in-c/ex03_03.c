/* 03 - Program control in c: ex03_03.c
   print the entries according to their data type */
#include <stdio.h>

int main(void)
{
        int intVal;
        char charVal;
        
        scanf("%d\n", &intVal);
        charVal = getchar();
        printf("Integer: %d\nCharacter: %c\n", intVal, charVal);

        return 0;
}
