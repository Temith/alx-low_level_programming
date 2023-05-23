#include <stdlib>
#include "dog.h"
/**
 * free_dog - function that free dogs
 * @d: struct dog to frr
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		gree(d);
	}
}
