// Chapter 2 - Introduction to C Programming
// Exercise 2.29 - Integer Value of a Character
#include <stdio.h>

int main(void)
{
    printf("%s %d\n", "The capital letter A equals the integer", 'A');
    printf("%s %d\n", "The capital letter B equals the integer", 'B');
    printf("%s %d\n", "The capital letter C equals the integer", 'C');
    puts("");

    printf("%s %d\n", "The lowercase letter a equals the integer", 'a');
    printf("%s %d\n", "The lowercase letter b equals the integer", 'b');
    printf("%s %d\n", "The lowercase letter c equals the integer", 'c');
    puts("");

    printf("%s %d\n", "The number 0 is equal to the integer", '0');
    printf("%s %d\n", "The number 1 is equal to the integer", '1');
    printf("%s %d\n", "The number 2 is equal to the integer", '2');
    puts("");

    printf("%s %d\n", "The symbol $ is equal to the integer", '$');
    printf("%s %d\n", "The symbol * is equal to the integer", '*');
    printf("%s %d\n", "The symbol + is equal to the integer", '+');
    printf("%s %d\n", "The symbol / is equal to the integer", '/');
    puts("");

    printf("%s %d\n", "The character   is equal to the integer", ' ');
}