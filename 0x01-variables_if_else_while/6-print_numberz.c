#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 when successful
 */

int main(void)
{
	int x;

	while (x < 10)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
