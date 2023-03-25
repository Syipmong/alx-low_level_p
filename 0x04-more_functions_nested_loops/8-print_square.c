#include "main.h"
/**
 * print_square - prints a square followed by new line
 * @size: int
 * Return:always 0
 */

void print_square(int size)
{
	int length, width;
for (length = 0; length < size; length++)
{
	for (width = 1; width <= size; width++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
if (size <= 0)
{
	_putchar('\n');
}
}}
