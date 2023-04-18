#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 *
 * @d: input pointer to struct dog
 * @name: input string
 * @age: input float
 * @owner: input char *
 *
 * Return: VOID
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
