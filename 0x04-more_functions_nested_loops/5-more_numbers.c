#include "main.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times.
 *
 * Return: void
 */
void more_numbers(void)
{
	int n, c;

	for (c = 0; c <= 9; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}

