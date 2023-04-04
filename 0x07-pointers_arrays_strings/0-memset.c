#include "main.h"

/**
 * _memset - fills the first n bytes of the memory
 * area pointed to by s with the constant byte c.
 *
 * @s: string input
 * @b: char input
 * @n: unsigned int input
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
