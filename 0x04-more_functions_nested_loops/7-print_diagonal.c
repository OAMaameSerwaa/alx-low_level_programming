#include "main.h"

/**
 * print_diagonal - Draws a diagonal line.
 * @n: The number of \ characters to be printed.
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int line, number;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (number = 0; number < line; number++)
				_putchar(' ');
			_putchar('\\');

			if (line == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
