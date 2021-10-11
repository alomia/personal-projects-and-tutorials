/* 03 - Programi control in c: ex03_20.c
   Calculating Sales */
#include <stdio.h>

int main(void)
{
        unsigned int productNumber = 0;
        unsigned int quantity = 0;
        
        float price;
        
        printf("Enter product number: ");
        scanf("%u", &productNumber);

        printf("Enter quantity sold for one day: ");
        scanf("%u", &quantity);

        switch (productNumber) {
                case 1:
                        price = 2.98;
                        break;
                case 2:
                        price = 4.50;
                        break;
                case 3:
                        price = 9.98;
                        break;
                case 4:
                        price = 4.49;
                        break;
                case 5:
                        price = 6.87;
                        break;
                default:
                        price = 0;
        }

        printf("Total weekly sales is $%.2f\n", (price * quantity) * 7);

        return 0;
}
