#include "main.h"

/**
 * sqrt - Calculates natural square root
 * @n: number to calculate the square root of
 * @b: number that iterates from 1 to n
 *
 * Return: squrt of b or -1 for error
 */
int sqrt(int n, int b)
{
	if (b * b == n)
		return (b);
	else if (b * b > n)
		return (-1);
	return (sqrt(b + 1, n));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{

	return (sqrt(1, n));
}
