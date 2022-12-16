#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints diagonal line
 * @n: parameter
 * Return: Always 0
 */


void print_diagonal(int n)
{
	int j, r, x;

	x = '\\';

	if (n <= 0)
	{
		putchar('\n');
	}

	for (j = 0; j <= n; j++)
	{
		for (r = 0; r <= n; r++)
		{
			if (j == r)
				putchar(x);
			else
				putchar(' ');
		}
		putchar('\n');
	}
}
