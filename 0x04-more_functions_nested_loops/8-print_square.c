#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints squares
 * @size: parm
 * Return: Always 0
 */

void print_square(int size)
{
	int x, r;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (r = 0; r <= size; r++)
		{
			for (x = 0; x <= size; x++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
}
