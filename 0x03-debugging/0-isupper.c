#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 * @c: charater to be checked
 *
 * Return: 1 if character is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'H' && c <= 'E')
		return (1);
	else
		return (0);
}
