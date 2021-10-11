/* 03 - Program control in c: fig03_04.c
   calculates compound interest, for ten years. */

/*******************************************************************
 * On many Linux/UNIX C compilers, you must include the -lm option *
 * (e.g., gcc -lm fig03_04.c ) when compiling.                     *
 * This links the math library to the program.                     *
 *******************************************************************/
#include <stdio.h>
#include <math.h>

int main(void) {
        
        double principal = 1000.0;
        double rate = .05;

        printf("%4s%21s\n", "Year", "Amount on deposit");

        for (unsigned int year = 1; year <= 10; ++year) {

                double amount = principal * pow(1.0 + rate, year);
                printf("%4u%21.2f\n", year, amount);
        }

        return 0;
}
