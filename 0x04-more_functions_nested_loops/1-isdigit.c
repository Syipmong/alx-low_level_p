#include "main.h"
/**
 *_isdigit - checks for a digit
 *@c:int
 *Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
char digit;
for (digit = '0'; digit <= '9'; digit++)
{
	if (digit == c)
		return (1);
}
return (0);
}
