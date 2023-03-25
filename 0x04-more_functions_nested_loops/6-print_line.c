#include "main.h"
/**
 *print_line - print lines
 *@n:int
 *Return: always 0
 */

void print_line(int n)
{
	int times;

	for (times = 0; times < n; times++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
