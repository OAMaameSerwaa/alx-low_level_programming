#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string with the characters. 
 *
 * Return: void.
 */
void puts2(char *str)
{
	int x = 0, len = 0;

	while (str[x++])
		len++;

	for (x = 0; x < len; x += 2)
		_putchar(str[x]);

	_putchar('\n');
}
