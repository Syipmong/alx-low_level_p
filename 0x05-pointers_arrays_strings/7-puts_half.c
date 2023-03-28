#include "main.h"
/**
 * puts_half - prints second half
 *@str: char
 *Return: always 0
 */

void puts_half(char *str)
{
int count;

while (*str != '\0')
{
	count++;
	str++;
}

if (count % 2 == 0)
	count =  count / 2;
else
count =	(count - 1) / 2;

	str = str - count;
for (; *str != '\0'; str++)
	_putchar(*str);

	_putchar('\n');
}
