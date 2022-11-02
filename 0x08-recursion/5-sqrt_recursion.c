#include "main.h"

/**
 * sqrt_check - Calculates natural square root
 * @a: number to calculate the square root of
 * @c: number that iterates from 1 to n
 *
 * Return: squrt of c or -1 for error
 */
int sqrt_check(int a, int c)
{
	if (a * a == c)
		return (a);
	else if (a * a > c)
		return (-1);
	return (sqrt_check(a + 1, c));
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
