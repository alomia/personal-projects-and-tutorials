/* 03 - Program control in c: fig03_05.c
   Counting letter grades with switch. */
#include <stdio.h>

int main(void) {
        
        unsigned int aCount = 0;
        unsigned int bCount = 0;
        unsigned int cCount = 0;
        unsigned int dCount = 0;
        unsigned int fCount = 0;

        puts("Enter the letter grande.");
        puts("Enter the EOF character to end input.");

        int grande;

        while ((grande = getchar()) != EOF) {

                switch (grande) {
                        case 'A':
                        case 'a':
                                ++aCount;
                                break;
                        case 'B':
                        case 'b':
                                ++bCount;
                                break;
                        case 'C':
                        case 'c':
                                ++cCount;
                                break;
                        case 'D':
                        case 'd':
                                ++dCount;
                                break;
                        case 'F':
                        case 'f':
                                ++fCount;
                                break;
                        case '\n':
                        case '\t':
                        case ' ':
                                break;
                        default:
                                printf("%s", "Incorrect letter grande entered.");
                                puts(" Enter a new grande.");
                                break;
                }
        }

        puts("\nTotals for each letter grande are:");
        printf("A: %u\n", aCount);
        printf("B: %u\n", bCount);
        printf("C: %u\n", cCount);
        printf("D: %u\n", dCount);
        printf("F: %u\n", fCount);

        return 0;
}
