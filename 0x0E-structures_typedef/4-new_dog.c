#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 *
 * @name: input string
 * @age: input float
 * @owner: input string
 *
 * Return: dog_t *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int len_n, len_o, i;

	if (name == NULL || owner == NULL)
		return ('\0');
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return ('\0');
	for (len_n = 0; name[len_n]; ++len_n)
		;
	dog->name = malloc(len_n + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return ('\0');
	}
	for (len_o = 0; owner[len_o]; ++len_o)
		;
	dog->owner = malloc(len_o + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return ('\0');
	}
	for (i = 0; i <= len_n; i++)
		dog->name[i] = name[i];
	for (i = 0; i <= len_o; i++)
		dog->owner[i] = owner[i];
	dog->age = age;
	return (dog);
}
