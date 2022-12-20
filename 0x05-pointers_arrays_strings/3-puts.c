#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string 
 * @str: parameter
 * Return: Always 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
		putchar('\n');
}
