#include "main.h"

/**
 *_strlen- string length calcuator
 *@s: char
 *Return: int
 */

int _strlen(char *s)
{

int count;
while (*s != '\0')
{
	count++;
	s++;
}
	return (count);
}
