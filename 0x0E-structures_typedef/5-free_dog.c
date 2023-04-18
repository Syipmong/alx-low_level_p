#include "dog.h"
#include <stdlib.h>

/**
 *  free_dog - free a struct dog
 *
 * @d: input struct dog
 *
 * Return: VOID
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
