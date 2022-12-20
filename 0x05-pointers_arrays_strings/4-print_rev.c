#include "main.h"
#include <stdio.h>

/**
 * print_rev - reverse string
 * @s: parameter
 * Return: always 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if ((s[i]) = '\0')
		break;
		i++;
	}

	for (i--; i > 0; i--)
		putchar(s[i]);
	putchar('\n');
}
