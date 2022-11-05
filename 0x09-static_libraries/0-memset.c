#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * @s: pointer to the area to be filled
 * @b: character to fill the area with
 * @n: number of bytes to be filled
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;


	return (s);
}
