#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers 1 - 9 except for 2 and 4
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x != 2 && x != 4)
		{
			putchar(x);
		}
	}
}
