#include "main.h"
/**
 * *malloc_checked - print a function that allocate memory using malloc
 * @b: int
 *
 * Return: pointer to array initialized or NULL
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
