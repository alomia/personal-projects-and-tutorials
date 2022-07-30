// Chapter 6 - C Arrays
// Exercise 6.31 - Palindromes
#include <stdio.h>
#include <string.h>

int isPalindrome(char *str);
char *removeWhiteSpaces(char *str);

unsigned int length(char *str);

int main(void)
{
    char str[50];

    puts("Know if the string entered is a palindrome");

    printf("%s", "Enter string: ");
    scanf("%s", str);

    if (isPalindrome(str))
    {
        puts("The string entered is a palindrome.");
    }
    else
    {
        puts("The string entered is not a palindrome.");
    }
}

int isPalindrome(char *str)
{
    unsigned int palindrome = 0;
    removeWhiteSpaces(str);

    for (size_t start = 0; start < strlen(str); ++start)
    {
        unsigned int end = strlen(str) - start - 1;

        if (str[start] == str[end])
            palindrome = 1;

        else
            palindrome = 0;

        if (palindrome == 0)
            break;
    }

    return palindrome;
}

char *removeWhiteSpaces(char *str)
{
    int i = 0, j = 0;

    while (str[i])
    {
        if (str[i] != ' ')
            str[j++] = str[i];
        i++;
    }

    str[j] = '\0';
    return str;
}