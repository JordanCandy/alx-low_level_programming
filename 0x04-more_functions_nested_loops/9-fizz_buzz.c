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
		for (x = 0; x < 101; x++)
		{
			if (x % 3 == 0)
			{
				printf("Fizz");
			}
			else if (x % 5 == 0)
			{
				printf("Buzz");
			}
			else if (x % 3 == 0 && x % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else
			{
				printf("%d", x);
			}
		}
	}
	printf("\n");
	return (0);
}
