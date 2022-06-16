// Chapter 5 - C Functions
// Exercise 5.26 - Perfect Numbers
#include <stdio.h>

int isPerfect(unsigned int number);

int main(void)
{
	unsigned int number = 1;

	while (number <= 1000)
	{
		unsigned int result = isPerfect(number);

		if (result)
		{
			unsigned int counter = 0;
			unsigned int sum = 0;

			printf("%2d = ", number);

			while (sum < number)
			{
				++counter;
				sum += counter;
				printf("%d", counter);

				if (sum < number)
					printf(" %s ", "+");
			}

			puts(".");
		}
		++number;
	}
	puts("");
}

int isPerfect(unsigned int number)
{
	unsigned int perfect = 0;
	unsigned int counter = 0;
	unsigned int sum = 0;

	while (sum < number)
	{
		++counter;
		sum += counter;
	}

	if (sum == number)
		perfect = 1;

	return perfect;
}
