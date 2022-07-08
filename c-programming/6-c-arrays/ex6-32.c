// Chapter 6 - C Arrays
// Exercise 6.32 - Linear Search
#include <stdio.h>
#define SIZE 100

size_t linearSearch(const int array[], int key, size_t size);

int main(void)
{
    int a[SIZE];

    for (size_t x = 0; x < SIZE; ++x)
    {
        a[x] = 2 * x;
    }

    printf("Enter integer search key: ");
    int searchKey;
    scanf("%d", &searchKey);

    size_t index = linearSearch(a, searchKey, SIZE);

    if (index != -1)
    {
        printf("Found value at index %ld\n", index);
    }
    else
    {
        puts("Value not found");
    }
}

size_t linearSearch(const int array[], int key, size_t size)
{
    if (size > 0)
    {
        if (array[size] == key)
        {
            return size;
        }
        else
        {
            linearSearch(array, key, size -1);
        }
    }
    else
    {
        return -1;
    }
}
