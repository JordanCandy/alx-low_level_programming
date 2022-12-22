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
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
