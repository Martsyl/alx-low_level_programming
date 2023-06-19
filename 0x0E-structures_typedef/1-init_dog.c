#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - check the code
 * @d: ponter
 * @name: char
 * @age: floating num
 * @owner: character
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}

