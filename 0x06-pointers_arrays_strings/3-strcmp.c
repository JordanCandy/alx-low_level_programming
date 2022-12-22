#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: parameter
 * @s2: parameter two
 * Return: always 0
 */

int _strcmp(char *s1, char *s2)
{
	int r, s, x;

	r = 0;
	s = 1;
	x = -1;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 > *s2)
		{
			putchar(s);
		}
		else if (*s1 == *s2)
		{
			putchar(r);
		}
		else
		{
			putchar(x);
		}
	}
	return (0);
}
