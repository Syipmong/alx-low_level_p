#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 *
 * @n: int input
 *
 * Return: -1 to indicate an error otherwise the factorial of @n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
