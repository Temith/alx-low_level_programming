#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check if a string is palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, if not 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - retuning the lenth of a string
 * @s: string to be calculated
 *
 * Return: return length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (i + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively
 * @s: string to check
 * @i: iteration
 * @len: length of the string
 *
 * Return: 1 if it is, if not 0
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1));
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
