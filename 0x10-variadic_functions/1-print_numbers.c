#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separator to print between numbers
 * @n: number of integers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int numb;
	va_list numbs;

	va_start(numbs, n);
	for (i = 0; i < n; i++)
	{
		numb = va_arg(numbs, int);
		printf("%d", numb);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbs);
}


