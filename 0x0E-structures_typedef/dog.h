#includiie <stdio.h>
#include "dog.h"
/**
 * int_dog - define a new type struct dog
 * @d: pointer to be intiate
 * @name: name of the member
 * @age: age of the member
 * @owner: owner of the member
 */
void int_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
