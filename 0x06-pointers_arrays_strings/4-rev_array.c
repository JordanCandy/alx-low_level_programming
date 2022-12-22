#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse order of int array
 * @a: parameter
 * @n: parameter
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
	int x, r;

	for (r = n - 1; r >= n / 2; r--)
	{
		x = a[n - 1 - r];
		a[n - 1 - r] = a[r];
		a[r] = x;
	}
}
