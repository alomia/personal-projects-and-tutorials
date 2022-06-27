// Chapter 6 - C Arrays
// Exercise 6.11 - Bubble Sort
#include <stdio.h>
#define SIZE 14

void bubbleSort(int array[], size_t size);
void printArray(int array[], size_t size);

int main(void)
{
    int a[SIZE] = {2, 0, 6, 4, 8, 1, 10, 21, 12, 89, 68, 45, 37, 5};

    puts("Data items in original order");
    printArray(a, SIZE);

    // Bubble Sort
    bubbleSort(a, SIZE);

    puts("\nData items in ascending order");
    printArray(a, SIZE);
}

void bubbleSort(int array[], size_t size)
{
    for (unsigned int pass = 1; pass < size; ++pass)
    {
        int exchange = 0;

        for (size_t i = 0; i < size - pass; ++i)
        {
            if (array[i] > array[i + 1])
            {
                int hold = array[i];
                array[i] = array[i + 1];
                array[i + 1] = hold;

                exchange = 1;
            }
        }

        if (exchange == 0)
        {
            break;
        }
    }
}

void printArray(int array[], size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        printf("%4d", array[i]);
    }

    puts("");
}
