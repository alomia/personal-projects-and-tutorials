/* 03 - Program control in c: ex03_16.c
   compound interest at rates of 5%, 6%, 7%, 8%, 9%. */
#include <stdio.h>
#include <math.h>

int main()
{
        double principal = 1000.0;
        unsigned int rate = 5;
        unsigned int counter;

        printf("%4s%21s\n", "Year", "Amount on deposit");
        
        for (counter = 1; counter <= 6; counter++) { 

                for (unsigned int year = 1; year <= 10; year++) {

                        double amount = principal * pow(1.0 + rate, year);
                        printf("%4u%21.2f\n", year, amount);
                }

                rate++;
        }

        return 0;
}
