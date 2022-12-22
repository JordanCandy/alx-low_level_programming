#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes string to upper case
 * @x: parameter
 * Return: char
 */

char *string_toupper(char *x)
{
	int j = 0;

	while (x[j])
	{
		if (x[j] >= 'a' && x[j] <= 'z')
		{
			x[j] -= 32;
			j++;
		}
	}
	return (x);
}
