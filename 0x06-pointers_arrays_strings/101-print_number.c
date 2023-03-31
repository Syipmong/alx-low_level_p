#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integar
 * @n:int
 * Return: void
 */

void print_number(int n)
{
	unsigned int nc, nx;
	unsigned int div = 1;
	unsigned int places = 0;
	unsigned int digit;
	unsigned int x;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n > 0)
	{
		nc = nx = n;
	}
	if (n < 0)
	{
		nc = nx = -n;
		_putchar('-');
	}
	while (nx > 0)
	{
		nx = nx / 10;
		places++;
	}
	for (x = 1; x < places; x++)
	{
		div = div * 10;
	}
	for (x = 0; x < places; x++)
	{
		digit = nc / div;
		if (digit > 9)
			digit = digit % 10;

		_putchar(digit + '0');

		div = div / 10;
	}
}
