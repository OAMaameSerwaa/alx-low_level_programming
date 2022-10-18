#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @s: The number to be treated
 * Return: The last digit
 */
int print_last_digit(int s)
{
	int ld;

	ld = (s % 10);

	if (ld < 0)
	{
		ld = (-1 * ld);
	}

	_putchar(ld + '0');
	return (ld);
}


