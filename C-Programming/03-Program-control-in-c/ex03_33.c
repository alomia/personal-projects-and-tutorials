/* 03 - Programi control in c: ex03_33.c
   prints the Roman numeral equivalences of decimal values */

#include <stdio.h>

int main(void)
{
        int number = 1;
        
        while (number <= 100) {
                
                printf("%3d = ", number);
                
                if (number > 99) {
                        switch (number / 100) {
                                case 1:
                                        printf("C");
                                        break;
                        }
                }

                if (number > 9) {

                        switch (number / 10) {
                        
                                case 1:
                                        printf("X");
                                        break;
                                case 2:
                                        printf("XX");
                                        break;
                                case 3:
                                        printf("XXX");
                                        break;
                                case 4:
                                        printf("XL");
                                        break;
                                case 5:
                                        printf("L");
                                        break;
                                case 6:
                                        printf("LX");
                                        break;
                                case 7:
                                        printf("LXX");
                                        break;
                                case 8:
                                        printf("LXXX");
                                        break;
                                case 9:
                                        printf("XC");
                                        break;
                        }
                }

                switch (number % 10) {

                        case 1:
                                printf("I");
                                break;
                        case 2:
                                printf("II");
                                break;
                        case 3:
                                printf("III");
                                break;
                        case 4:
                                printf("IV");
                                break;
                        case 5:
                                printf("V");
                                break;
                        case 6:
                                printf("VI");
                                break;
                        case 7:
                                printf("VII");
                                break;
                        case 8:
                                printf("VIII");
                                break;
                        case 9:
                                printf("IX");
                                break;
                }
                
                printf("\n");
                number++;
        }

        return 0;
}
