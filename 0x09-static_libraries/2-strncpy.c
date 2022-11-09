#include "main.h"

/**
 *  _strncpy - Copies a string
 *  @dest: The destination string
 *  @src: The source string
 *  @n: The maximum number of bytes to copied from src
 *
 *  Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int e = 0, f = 0;

	while (src[e++])
		f++;

	for (e = 0; src[e] && e < n; e++)
		dest[e] = src[e];

	for (e = f; e < n; e++)
		dest[e] = '\0';

	return (dest);
}
