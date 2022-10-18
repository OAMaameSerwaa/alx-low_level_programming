#include "main.h"

/**
 * _islower - checks for lower case character
 * @c: single letter input
 * Return: 1 for lowercase character or 0 for anything otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
