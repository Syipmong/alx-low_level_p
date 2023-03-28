#include "main.h"
/**
 *rev_string- reverse
 *@s: char
 *Return: void
 */
void rev_string(char *s)
{
	int count;
	char *y = s;
	char temp;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	s--;


	count = count / 2;

	for (; count > 0; count--, y++, s--)
	{
	temp = *y;
	*y = *s;
	*s = temp;
	}
}
