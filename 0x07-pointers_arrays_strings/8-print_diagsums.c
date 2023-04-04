#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: input pointer
 * @size: size of @a
 *
 * Return: VOID
 */
void print_diagsums(int *a, int size)
{
	int i, c1 = 0, c2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			c1 += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < (size * size - 1))
			c2 += a[i];
	}
	printf("%d, %d\n", c1, c2);
}
