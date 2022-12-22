#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string
 * @x: parameter
 * Return: string
 */

char *leet(char *x)
{
	int j = 0, r;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (x[j])
	{
		for (r = 0; r <= 7; r++)
		{
			if (x[j] == leet[r] ||
					x[j] - 32 == leet[r])
				x[j] = r + '0';
		}
		j++;
	}
	return (x);
}
