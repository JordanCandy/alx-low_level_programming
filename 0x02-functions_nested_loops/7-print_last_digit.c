#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - pprints last digit of a number
 * @x: parameter
 * Return: return x
 */

int print_last_digit(int x)
{
	int r;

	if (x < 0)
	{
		x = -x;
	}
	r = x % 10;
	return (r);
}
