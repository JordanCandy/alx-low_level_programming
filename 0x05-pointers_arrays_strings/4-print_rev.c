#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - reverse string
 * @s: parameter
 * Return: always 0
 */

void print_rev(char *s)
{
	int i = 0;
	
	for (i--; i > 0; i--)
	{
		putchar(s[i]);
		putchar('\n');
	}
}
