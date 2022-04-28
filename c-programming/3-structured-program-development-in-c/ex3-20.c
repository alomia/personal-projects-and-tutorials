// Chapter 3 - Structured Program Development in C
// Exercise 3.20 - Salary Calculator
#include <stdio.h>

int main(void)
{
    unsigned int hoursWorked = 0;
    float hourlyRate = 0, salary = 0;

    printf("%s ", "Enter # of hours worked (-1 to end):");
    scanf("%d", &hoursWorked);

    while (hoursWorked != -1)
    {
        printf("%s ", "Enter hourly rate of the worker ($00.00):");
        scanf("%f", &hourlyRate);

        if ( hoursWorked > 40 )
        { 
            salary = 40 * hourlyRate;

            for (unsigned int overtime = 40; overtime < hoursWorked; overtime++)
            {
                salary += (hourlyRate + hourlyRate / 2);
            }
        }
        else {
            salary = hoursWorked * hourlyRate;
        }

        printf("Salary is $%.2f", salary);

        printf("\n\n%s ", "Enter # of hours worked (-1 to end):");
        scanf("%d", &hoursWorked);
    }   
}