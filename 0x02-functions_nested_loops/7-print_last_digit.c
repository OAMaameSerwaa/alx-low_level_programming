#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @s: The number to be treated
 * Return: The last digit
 */
int print_last_digit(int s)
{
	if (s < 0)
		s = s * -1;
	_putchar((s % 10) + '0');
	return (n % 10);
}
