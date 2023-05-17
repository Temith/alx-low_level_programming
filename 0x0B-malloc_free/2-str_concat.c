#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input one to concat
 * @s2: input two to cicat
 *
 * Return:oncat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, q;

	if (s1 == NULL)
		s1 = "";
	if (S2 == NULL)
		s2 = "";

	i = q = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[q] != '\0')
		q++;

	concat = malloc(sizeof(char) * (1 + q + 1);

	if (concat == NULL)
		return (NULL);

	i = q = 0;

	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++
	}

	while (s2[q] != '\0')

	{
		concat[i] = s2[i];
		i++;
	}
	concat[i] = '\0';

	return (concat);
}
