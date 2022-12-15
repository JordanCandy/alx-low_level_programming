#include "main.h"
#include <stdio.h>

/**
 * main - Prints
 *
 * Return: 0;
 */

int main(void)
{
	int k, x;

	for (k = 0; k <= 100; k++)
	{
		if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 ==  0)
		{
			printf("Buzz");
		}
		else if (x % 3 == 0  && x % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", x);
		}
		x++;
	}
	printf("\n");

	return (0);
}
