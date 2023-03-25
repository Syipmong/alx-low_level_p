#include "main.h"
/**
 *print_most_numbers - print numbers 0-9
 *
 *Return:always 0
 */

void print_most_numbers(void)
{
int num;
for (num = 0; num <= 9; num++)
{
	if (num != 4 && num != 2)
	_putchar(num + '0');
}
	_putchar('\n');
}
