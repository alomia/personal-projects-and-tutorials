// Chapter 6 - C Arrays
// Exercise 6.10 - Sales Commissions
#include <stdio.h>
#define SIZE 9

void addRange(unsigned int salary, unsigned int array[]);
void printRange(size_t size, unsigned int array[]);

int main(void)
{
    unsigned int sales = 0;
    unsigned int salary = 0;
    unsigned int wsb = 200;
    unsigned int salaries[SIZE] = {0};

    printf("%s", "Enter total sales for the week(-1 to end): ");
    scanf("%u", &sales);

    while (sales != -1)
    {
        salary = wsb + (sales * 9) / 100;

        size_t position = (salary / 100) - 2;

        if (position >= 0 && position <= 7)
        {
            ++salaries[position];
        }
        else {
            ++salaries[SIZE - 1];
        }
        printf("%s", "Enter total sales for the week(-1 to end): ");
        scanf("%u", &sales);
    }

    puts("");
    printf("%s%13s\n", "Salary range", "sellers");

    for (size_t sellers = 0; sellers < SIZE; ++sellers)
    {
        if (wsb >= 200 && wsb <= 999)
        {
            printf("$%u-$%u%14u\n", wsb, wsb + 99, salaries[sellers]);
        }
        else {
            printf("$%u%s%9u\n", wsb, " and over", salaries[sellers]);
        }
        wsb += 100;
    }
}