#include "dog.h"

/**
 * init_dog - printing a text to the user.
 * @d: Input Struct.
 * @name: Input name
 * @age: Input age.
 * @owner: Input Owner.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
