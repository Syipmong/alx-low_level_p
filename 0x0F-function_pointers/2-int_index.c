#include "function_pointers.h"

/**
 *  int_index - searches for an integer.
 *
 * @array: int pointer
 * @size: is the size of the array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
