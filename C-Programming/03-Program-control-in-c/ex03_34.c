#include <stdlib.h>
#include <stdio.h>

int main(void)
{
        int decimal = 1; 
                
        printf("Decimal\t\tBinary\n");
        
        while (decimal <= 256) {

                int counter = 0;

                int arrBinary[9];
 
                int binary = decimal;

                //decimal number
                printf("%3d\t\t", decimal);

                //Binary converter
                while (binary > 0) {
                        
                        arrBinary[counter] = binary % 2;
                        binary /= 2;
                        counter++;
                }

                for (; counter > 0; counter--) {
                        printf("%1d", arrBinary[counter - 1]);
                }
                
                decimal++;
                printf("\n");
        }

        return 0;
}
