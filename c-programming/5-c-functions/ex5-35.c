// Chapter 5 - C Functions
// Exercise 5.35 - Fibonacci
#include <stdio.h>

unsigned long int fibonacci(unsigned int n);

int main(void)
{
    unsigned int number = 0;
    printf("%s", "Enter an integer: ");
    scanf("%u", &number);
    printf("Fibonacci(%u) = %lu", number, fibonacci(number));
    puts("");
}

unsigned long int fibonacci(unsigned int n)
{
    unsigned int count = 1;
    unsigned int firstNum = 0;
    unsigned int secondNum = 1;
    unsigned long int fibonacci = 0;

    if (n == 0)
    {
        fibonacci = 0;
    }
    else
    {
        while (count <= n)
        {

            fibonacci = firstNum + secondNum;
            secondNum = firstNum;
            firstNum = fibonacci;
            ++count;
        }
    }

    return fibonacci;
}
