#include "main.h"
/**
 * puts2 - print every other character of a string
 * @str: function parameter
 * Return: 0
 */
void puts2(char *str)
{
	int i;
	int len = 0;
	int t = 0;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	t = len - 1;
	for (i = 0; i <= t; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
