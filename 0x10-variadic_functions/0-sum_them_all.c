#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all the arguments
 * @n: the number of arguments
 * Return: If n == 0 - 0, otherwise return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbs;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(numbs, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbs, int);
	}
	va_end(numbs);
	return (sum);
}
