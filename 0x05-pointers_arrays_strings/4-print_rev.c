#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	for (l = l - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}

	_putchar('\n');
}
