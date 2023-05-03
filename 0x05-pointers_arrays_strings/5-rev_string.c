#include "main.h"
/**
 * rev_string - print a fuction that reverses a string
 * @s: function parameter
 * Return: 0
 */
void rev_string(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (i = len; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

