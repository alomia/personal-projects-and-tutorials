// Chapter 6 - C Arrays
// Exercise 6.33 - Binary Search
#include <stdio.h>
#define SIZE 15

size_t binarySearch(const int arr[], int searchKey, size_t low, size_t hight);

int main(void)
{
    int a[SIZE] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28};

    printf("%s", "Enter a number between 0 and 28: ");
    int key;
    scanf("%d", &key);

    size_t result = binarySearch(a, key, 0, SIZE - 1);

    if (result != -1)
    {
        printf("%d found at index %ld\n", key, result);
    }
    else
    {
        printf("%d not found\n", key);
    }
}

size_t binarySearch(const int arr[], int searchKey, size_t low, size_t hight)
{
    if (low <= hight)
    {
        size_t middle = (low + hight) / 2;

        if (searchKey == arr[middle])
        {
            return middle;
        }
        else if (searchKey < arr[middle])
        {
            hight = middle -1;
        }
        else
        {
            low = middle + 1;
        }

        return binarySearch(arr, searchKey, low, hight);
    }
    else
    {
        return -1;
    } 
}
