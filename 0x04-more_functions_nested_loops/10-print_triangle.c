#include "main.h"
/**
 *print_triangle - print triangle
 *@size:int
 *Return: always 0
 */

void print_triangle(int size)
{
int times, x, y;

for (times = size; times > 0; times--)
{
	for (x = 1 ; x < times; x++)
	{	_putchar(' ');
	}
	for (y = size; y >= times; y--)
	{ _putchar('#');
	}
	_putchar('\n');
}

if (size <= 0)
	_putchar('\n');
}
