#include <stdio.h>
#include <main.h>

/**
 * main - Pints alphabet in lower case
 * avoid print_alphabet(void): function used to write code
 * Return: Always 0
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'x'; x++)
	{
		putchar(x);
	}
	putchar('\n');
}

int main(void)

{

	    print_alphabet();

	        return (0);

}
