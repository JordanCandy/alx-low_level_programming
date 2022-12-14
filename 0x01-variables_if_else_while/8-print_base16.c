#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 when positive
 */

int main(void)
{
	int x;
	int y;

	while (x < 10)
	{
		putchar(x + '10');
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
