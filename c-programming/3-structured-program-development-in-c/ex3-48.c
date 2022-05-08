// Chapter 3 - Structured Program Development in C
// Exercise 3.48 - Enforcing Privacy with Cryptography
#include <stdio.h>

int main(void)
{
    unsigned int option = 0, number = 0;
    unsigned int digit_1 = 0, digit_2 = 0, digit_3 = 0, digit_4 = 0;
    unsigned int digit_aux = 0;

    puts(" ____  __ _   ___  ____  _  _  ____  ____  __  ____        ___\n"
         "(  __)(  ( \\ / __)(  _ \\( \\/ )(  _ \\(_  _)/  \\(  _ \\ ___  / __)\n"
         " ) _) /    /( (__  )   / )  /  ) __/  )( (  O ))   /(___)( (__\n"
         "(____)\\_)__) \\___)(__\\_)(__/  (__)   (__) \\__/(__\\_)      \\___)\n");

    puts("Welcome, this is a program that encrypts and\ndecrypts 4-digit positive integers.");
    puts("");
    puts("1-Encrypt.");
    puts("2-Decrypt.");
    puts("3-To end.");
    puts("");
    printf("%s ", "Enter option:");
    scanf("%d", &option);

    while (option != 3)
    {
        if (option == 1)
        {
            puts("");
            printf("%s ", "Enter the number to encrypt:");
            scanf("%d", &number);

            digit_1 = ((number / 1000) + 7) % 10;
            number = number % 1000;

            digit_2 = ((number / 100) + 7) % 10;
            number = number % 100;

            digit_3 = ((number / 10) + 7) % 10;
            number = number % 10;

            digit_4 = (number + 7) % 10;

            digit_aux = digit_1;
            digit_1 = digit_3;
            digit_3 = digit_aux;

            digit_aux = digit_2;
            digit_2 = digit_4;
            digit_4 = digit_aux;

            puts("Complete encryption...🔒︎");
            printf("➜ %d%d%d%d\n", digit_1, digit_2, digit_3, digit_4);
            puts("-----------------------------------+");
        }
        else if (option == 2)
        {
            puts("");
            printf("%s ", "Enter the number to decrypt:");
            scanf("%d", &number);

            digit_1 = ((number / 1000) - 13) % 10;
            number = number % 1000;

            digit_2 = ((number / 100) - 13) % 10;
            number = number % 100;

            digit_3 = ((number / 10) - 13) % 10;
            number = number % 10;

            digit_4 = (number - 13) % 10;

            digit_aux = digit_1;
            digit_1 = digit_3;
            digit_3 = digit_aux;

            digit_aux = digit_2;
            digit_2 = digit_4;
            digit_4 = digit_aux;

            puts("Complete encryption...✓ ");
            printf("➜ %d%d%d%d\n", digit_1, digit_2, digit_3, digit_4);
            puts("-----------------------------------+");
        }
        else
        {
            puts("");
            puts("The option entered does not exist.");
            break;
        }

        puts("");
        puts("1-Encrypt.");
        puts("2-Decrypt.");
        puts("3-To end.");
        puts("");
        printf("%s ", "Enter option:");
        scanf("%d", &option);
    }
}