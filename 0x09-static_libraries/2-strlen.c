#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: String to count.
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	
	return (len);
}
