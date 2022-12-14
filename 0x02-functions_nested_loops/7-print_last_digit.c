#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @x: a parameter
 * Return: return 0
 */

int print_last_digit(int x)
{
	int r = x % 10;

	putchar(r);
	return (r);
}
