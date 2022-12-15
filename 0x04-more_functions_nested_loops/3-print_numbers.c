#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	putchar('\n');
}
