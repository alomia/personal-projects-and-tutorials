// Chapter 2 - Introduction to C Programming
// Exercise 2.31 - Table of Squares and Cubes
#include <stdio.h>

int main(void)
{
    printf("%s%8s%6s\n", "number", "square", "cube");
    printf("%d%8d%8d\n", 0, 0 * 2, 0 * 3);
    printf("%d%8d%8d\n", 1, 1 * 2, 1 * 3);
    printf("%d%8d%8d\n", 2, 2 * 2, 2 * 3);
    printf("%d%8d%8d\n", 3, 3 * 2, 3 * 3);
    printf("%d%8d%9d\n", 4, 4 * 2, 4 * 3);
    printf("%d%9d%8d\n", 5, 5 * 2, 5 * 3);
    printf("%d%9d%8d\n", 6, 6 * 2, 6 * 3);
    printf("%d%9d%8d\n", 7, 7 * 2, 7 * 3);
    printf("%d%9d%8d\n", 8, 8 * 2, 8 * 3);
    printf("%d%9d%8d\n", 9, 9 * 2, 9 * 3);
    printf("%d%8d%8d\n", 10, 10 * 2, 10 * 3);
}