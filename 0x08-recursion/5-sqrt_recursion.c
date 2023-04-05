#include "main.h"

/**
 * _sqrt_helper - a helper function that does the recursion work.
 *
 * @n: int input
 * @min: min guess int input
 * @max: max guess int input
 *
 * Return: he natural square root of @n
 */
int _sqrt_helper(int n, int min, int max)
{
	int guess = (min + max) / 2;

	if (guess * guess == n)
		return (guess);
	else if (max == min)
		return (-1);
	else if (guess * guess > n)
		return (_sqrt_helper(n, min, guess - 1));
	else
		return (_sqrt_helper(n, guess + 1, max));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: int input
 *
 * Return: he natural square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (_sqrt_helper(n, 0, n));
}
