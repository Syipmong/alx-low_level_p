#include "main.h"
/**
 *print_rev - prints reverse
 *@s: char
 *Return: void
 */
void print_rev(char *s)
{
	int count, x;

	while (*s != '\0')
	{
		count++;
		s++;

	}
	s--;
	for (x = 0; x < count; x++, s--)
		_putchar(*s);

	_putchar('\n');
}
