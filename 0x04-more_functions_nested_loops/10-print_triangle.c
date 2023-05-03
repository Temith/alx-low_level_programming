#include "main.h"

/**
 * print_triangle - prints a triangle using the '#' character
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i < size; i++)
	{
		for (int j = size -i; j > 1; j--)
		{
			_putchar(32);
		}
		for (int k = 0; k <= i; k++)
		{
			_putchar(35);
		}
	}
	}
	_putchar('\n');
	
}
