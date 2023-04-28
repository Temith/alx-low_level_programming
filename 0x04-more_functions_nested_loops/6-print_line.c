#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times the character _ should be printed
 * return: empty
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	int i;

	for (i = 0; i < n; i++)
		putchar('');

	_putchar('\n');
}
