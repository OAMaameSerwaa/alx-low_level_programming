#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes from src to be appended
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n);
{
	int c = 0, d = 0;

	while (dest[c++])
		d++;

	for (c = 0; src[c] && c < n; c++)
		dest[d++] = src[c];

	return (dest);
}
