#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalize string
 * @x: parameter
 * Return: string
 */

char *cap_string(char *x)
{
	int j = 0;

	while (x[j])
	{
	while (!(x[j] >= 'a' && x[j] <= 'z'))
		j++;

	if (x[j - 1] == ' ' ||
			x[j - 1] == '\t' ||
			x[j - 1] == '\n' ||
			x[j - 1] == ',' ||
			x[j - 1] == ';' ||
			x[j - 1] == '.' ||
			x[j - 1] == '!' ||
			x[j - 1] == '?' ||
			x[j - 1] == '"' ||
			x[j - 1] == '{' ||
			x[j - 1] == '}' ||
			x[j - 1] == '(' ||
			x[j - 1] == ')' ||
			j == 0)
		x[j] -= 32;
	j++;
	}
	return (x);
}
