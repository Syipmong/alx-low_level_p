#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: unsigned int
 *
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr != NULL)
		return (ptr);
	exit(98);
}
