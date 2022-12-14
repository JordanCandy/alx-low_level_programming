#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * print_alphabet_x10 - Prints alphabet x10
 * Result: Always 0
 */

void print_alphabet_x10(void)
{
	int j;
	int x;

	for (j = 0; j < 10; j++)
	{
		for ( x = 'a'; x <= 'z'; x++)
		{
			putchar(x);
		}
		putchar('\n');
	}
}
