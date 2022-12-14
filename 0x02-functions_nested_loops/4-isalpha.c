#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Find whether the code is an alphabet
 * @c: A parameter
 * Return: return 1 or 0
 */

int _isalpha(int c)
{
	return ((c = 'a' && c <= 'z') || (c = 'A' && c <= 'Z'));
}
