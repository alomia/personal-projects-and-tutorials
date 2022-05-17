// Chapter 4 - C Program Control
// Exercise 4.19 - Calculating Sales
#include <stdio.h>

int main(void)
{
    unsigned int product_number = 0;
    unsigned int quantity_sold = 0;
    double products_sold = 0;

    printf("%s", "Product number: ");
    scanf("%u", &product_number);

    printf("%s", "Quantity sold for one day: ");
    scanf("%u", &quantity_sold);

    switch (product_number)
    {
        case 1:
            products_sold += (2.98 * quantity_sold);
            break;

        case 2:
            products_sold += (4.50 * quantity_sold);
            break;

        case 3:
            products_sold += (9.98 * quantity_sold);
            break;

        case 4:
            products_sold += (4.49 * quantity_sold);
            break;

        case 5:
            products_sold += (6.87 * quantity_sold);
            break;

        default:
            puts("Sorry, the product number entered is not valid.");
            break;
    }

    printf("Last week's total sales were $%.2lf", products_sold);
    puts("");
}
