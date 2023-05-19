#include "main.h"
#include <stdio.h>
/**
 * *string_nconcat - print function that concat two strings
 * @s1: pointer to first string
 * @s2: pointer to 2nd string
 * @n: number of bytes from n2 arrey to concat
 *
 * Return: pointer to space in memory containing concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[k])
		k++;
	if (n >= k)
		l = i + k;
	else
		l = i + n;

	str = malloc(sizeof(char) * (l + 1));

	if (str == NULL)
		return (NULL);

	k = 0;

	while (j < l)
	{
		if (j <= i)
			str[i] = s1[j];
		if (j >= i)
		{
			str[j] = s2[k];
			k++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}


