#include "main.h"
/**
 * *array_range - create an aray of integer
 * @min: starting integer
 * @max: maximum integer
 *
 * Return: array of integer
 */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}

