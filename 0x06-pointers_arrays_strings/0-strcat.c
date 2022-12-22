#include <stdio.h>
#include <main.h>
#include <string.h>

/**
 * _strcat - Prints strings together
 * @dest: parm
 * @src: second parm
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0 i = 0;

	while (dest[len++])
		i++;

	for (len = 0; src[len]; len++)
	{
		dest[i++] = src[len];
	}

	return (dest);
}
