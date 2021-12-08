/* 04 - C Functions: ex04_07.c
   function that determines if a number is even or odd,
   if it is even it returns 1 if it is not it returns 0 */

#include <stdio.h>

int isEven(int number);

int main(void)
{
        int number;

        puts("IS EVEN OR ODD?");
        puts("Enter -1 to exit the program");
        
        printf("\nEnter integer: ");
        scanf("%d", &number);

        while (number != -1) {

                if (isEven(number) == 1) {
                        printf("%d is even.\n", number);
                }
                else {
                         printf("%d is odd.\n", number); 
                }
                
                printf("\nEnter integer: ");
                scanf("%d", &number);
        }

        printf("\nGoodbye come back soon (︡❛ ͜ʖ❛︠)\n");
        
        return 0;
}

int isEven(int number)
{
        int value = 0;

        if (number % 2 == 0)
                value = 1;

        return value;
}
