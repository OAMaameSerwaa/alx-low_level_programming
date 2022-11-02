#include "main.h"

/**
 * _sqrt - Calculates natural square root
 * @n: number to calculate the square root of
 * @b: number that iterates from 1 to n
 *
 * Return: squrt of b or -1 for error
 */
int _sqrt(int n, int b)
{
	if (n * n == b)
		return (n);
	if (n * n > b)
		return (-1);
	return (sqrt_check(n + 1, b));
}

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
