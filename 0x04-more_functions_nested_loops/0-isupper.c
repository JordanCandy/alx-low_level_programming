#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if letters are uppercase
 *
 * @c: parameter
 * Return: return1 or 0
 */

int _isupper(int c)
{
	if (c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
