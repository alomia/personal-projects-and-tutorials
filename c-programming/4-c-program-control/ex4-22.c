// Chapter 4 - C Program Control
// Exercise 4.22 - Average Grade
#include <stdio.h>

int main(void)
{
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;

    unsigned int average = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");
    int grade;

    while ((grade = getchar()) != EOF)
    {
        switch (grade) {

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
                printf("%s", "Incorrect letter grade entered.");
                puts(" Enter a new grade.");
                break;
        }
    }

    puts("\nTotals for each letter grade are:");
    printf("A: %u\n", aCount);
    printf("B: %u\n", bCount);
    printf("C: %u\n", cCount);
    printf("D: %u\n", dCount);
    printf("F: %u\n", fCount);

    average = (aCount + bCount + cCount + dCount + fCount) / 5;

    if (average == aCount)
        printf("Average grade is %s", "A");
    else if (average == bCount)
        printf("Average grade is %s", "B");
    else if (average == cCount)
        printf("Average grade is %s", "C");
    else if (average == dCount)
        printf("Average grade is %s", "D");
    else if (average == fCount)
        printf("Average grade is %s", "F");
    
    puts("");
}
