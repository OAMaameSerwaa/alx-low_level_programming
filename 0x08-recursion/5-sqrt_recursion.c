#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
