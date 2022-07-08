// Chapter 6 - C Arrays
// Exercise 6.21 - Airline Reservations System
#include <stdio.h>
#define SIZE 10

void firstClass(int array[]);
void economy(int array[]);
int checkSeats(int array[], int class);

int main(void)
{
    unsigned int option = 0;
    int airlineSeats[SIZE] = {0};

    while (1)
    {
        printf("Please type 1 for \"first class\"\n"
               "Please type 2 for \"economy\"\n");

        printf("%s", "Enter option: ");
        scanf("%u", &option);
        puts("");

        if (option == 1)
        {
            firstClass(airlineSeats);
        }
        else if (option == 2)
        {
            economy(airlineSeats);
        }

        puts("");
    }
}

void firstClass(int array[])
{

    if (checkSeats(array, 1))
    {
        for (size_t i = 0; i < 5; ++i)
        {
            if (array[i] == 0)
            {
                array[i] = 1;
                printf("Assigned seat: %ld\n"
                       "First class\n",
                       i + 1);
                break;
            }
        }
    }
}

void economy(int array[])
{
    if (checkSeats(array, 2))
    {
        for (size_t i = 6; i < 10; ++i)
        {
            if (array[i] == 0)
            {
                array[i] = 1;
                printf("Assigned seat: %ld\n"
                       "Economy\n",
                       i);
                break;
            }
        }
    }
}

int checkSeats(int array[], int class)
{
    int check = 0;

    if (class == 1)
    {
        for (size_t i = 0; i < 5; i++)
        {
            if (array[i] == 0)
            {
                check = 1;
            }
        }
    }
    else if (class == 2)
    {
        for (size_t i = 5; i < 10; i++)
        {
            if (array[i] == 0)
            {
                check = 1;
            }
        }
    }

    return check;
}
