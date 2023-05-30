#include "main.h"
/**
 * _puts_recursion - function like put();
 * @s: input
 *
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
