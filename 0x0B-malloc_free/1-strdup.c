#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - print a function that return a pointer to a new string
 * @str: char
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	int i = 0;
	int size = 0;

	char *nn;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	nn = malloc(size * sizeof(*str) + 1);

	if (nn == 0)
		return (NULL);

	else
	{
		for (; i < size; i++)
			nn[i] = str[i];
	}
	return (nn);
}

