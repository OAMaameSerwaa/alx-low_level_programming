#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to be printed.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int x = 0, len = 0, l;

	while (str[x++])
		len++;

	if ((len % 2) == 0)
		l = len / 2;

	else
		l = (len + 1) / 2;

	for (x = l; x < len; x++)
		_putchar(str[x]);

	_putchar('\n');
}
