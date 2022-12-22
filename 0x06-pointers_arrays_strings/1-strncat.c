#include "main.h"
#include <string.h>

/**
 * _strncat - prints string
 * @dest: param1
 * @src: param2
 * @n: param3
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}
		return (dest);
}
