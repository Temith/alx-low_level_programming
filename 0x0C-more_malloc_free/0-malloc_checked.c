#include "main.h"
/**
 * *malloc_checked - print a function that allocate memory using malloc
 * @b: int
 *
 * Return: pointer to array initialized or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *m malloc(b);

	if (m == 0)
		exist(98);
	return (m);
}
