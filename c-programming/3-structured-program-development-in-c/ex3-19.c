// Chapter 3 - Structured Program Development in C
// Exercise 3.19 - Interest Calculator
#include <stdio.h>

int main(void)
{
    float printcipal = 0, rate = 0;
    unsigned int days = 0;

    printf("%s ", "Enter loan principal (-1 to end):");
    scanf("%f", &printcipal);

    while (printcipal != -1)
    {
        printf("%s ", "Enter interest rate:");
        scanf("%f", &rate);

        printf("%s ", "Enter term of the loan in days:");
        scanf("%d", &days);

        const float interest = printcipal * rate * days / 365;

        printf("The interest charge is $%.2f", interest);

        printf("\n\n%s ", "Enter loan principal (-1 to end):");
        scanf("%f", &printcipal);
    }
}
