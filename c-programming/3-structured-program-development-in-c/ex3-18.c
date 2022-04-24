// Chapter 3 - Structured Program Development in C
// Exercise 3.18 - Sales-Commission Calculator
#include <stdio.h>

int main(void)
{
    float salesOfWeek = 0;

    printf("%s ", "Enter sales in dollars (-1 to end):");
    scanf("%f", &salesOfWeek);

    while (salesOfWeek != -1)
    {
        const float salary = 200 + (salesOfWeek * 9 / 100);
        printf("Salary is: $%.2f\n", salary);

        printf("\n%s ", "Enter sales in dollars (-1 to end):");
        scanf("%f", &salesOfWeek);
    }
}