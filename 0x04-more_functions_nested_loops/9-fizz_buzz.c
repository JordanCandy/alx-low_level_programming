#include "main.h"
#include <stdio.h>

/**
 * main - Prints
 *
 * Return: 0;
 */

int main(void)
{
	int k;

	for (k = 1; k < 101; k++)
	{
		if (k % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (k % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (k % 3 == 0 && k % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", k);
		}
	}
	return (0);
}
