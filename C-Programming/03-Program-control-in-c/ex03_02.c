/* 03 - Program control in c: ex03_01.c
   imprime si un número es par o impar, usando switch. */
#include <stdio.h>

int main(void)
{
        int value = 10;

        switch (value % 2) {
                case 0:
                        puts("Even integer");
                        break;
                case 1:
                        puts("Odd integer");
                        break;
        }
        
        return 0;
}
