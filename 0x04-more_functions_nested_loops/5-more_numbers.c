#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers 0 to 14 ten times
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int j, x;

	for (j = 0; j < 10; j++)
	{
		for (x = 0; x <= 14; x++)
		{
			putchar(x + '0');
		}
		putchar('\n');
	}
}
