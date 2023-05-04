#include "main.h"
/**
 * puts_half - return a function that print half of a string
 * @str: function parameter
 * Return: 0
 */
void puts_half(char *str)
{
	int i, a, len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	a = (len / 2);

	if ((len % 2) == 1)
		a = ((len + 1) / 2);
	for (i = a; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
