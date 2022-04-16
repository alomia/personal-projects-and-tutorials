// Chapter 2 - Introduction to C Programming
// Exercise 2.27 - Checkerboard Pattern of Asterisks
#include <stdio.h>

int main(void)
{
    // Display the following checkerboard pattern with eight printf statements
    printf("%s\n", "* * * * * * * *");
    printf("%s\n", " * * * * * * * *");
    printf("%s\n", "* * * * * * * *");
    printf("%s\n", " * * * * * * * *");
    printf("%s\n", "* * * * * * * *");
    printf("%s\n", " * * * * * * * *");
    printf("%s\n", "* * * * * * * *");
    printf("%s\n", " * * * * * * * *");

    puts("");
    
    // Display the same pattern with as few printf statements as possible
    printf("%s", "* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n");
}