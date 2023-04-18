#include <stdio.h>
#include "dog.h"

/**
 *  print_dog - prints a struct dog
 *
 * @d: input struct dog
 *
 * Return: VOID
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\nAge: %.6f\nOwner: %s\n",
			d->name ? d->name : "(nil)", d->age,
			d->owner ? d->owner : "(nil)");
}
