// Chapter 3 - Structured Program Development in C
// Exercise 3.21 - Predecrementing vs. Postdecrementing
#include <stdio.h>

int main(void)
{
    unsigned int number = 5;

    puts("Predecrementing");
    printf("Variable value: %d\n", number);
    puts("Applying the predecrement");
    printf("value of the variable after the Predecrement %d\n", --number);
    printf("Variable value now: %d", number);
    
    number = 5;
    puts("\n\nPostdecrementing");
    printf("Variable value: %d\n", number);
    puts("Applying the postdecrementing");
    printf("Value of the variable after the Predecrement %d\n", number--);
    printf("Variable value now: %d", number);

    puts("");
}