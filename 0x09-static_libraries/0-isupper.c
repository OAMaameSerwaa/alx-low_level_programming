#include "main.h"

/**
 * _isupper - checks is a character is in uppercase
 * @c: integer variable
 * Return: 1 if true, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
