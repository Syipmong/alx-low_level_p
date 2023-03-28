#include "main.h"

/**
 *puts2 - prints every other char
 *@str: char*
 *Return: void
 */

void puts2(char *str)
{
	int count = 0;
	int x;

	while (*str)
	{
		count++;
		str++;
	}
	str = str - count;

	for (x = 0; x < count; x += 2)
	_putchar(str[x]);

	_putchar('\n');
}
