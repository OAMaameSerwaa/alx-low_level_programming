#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: starting address
 * @b: desired value
 * @n: number of bytes
 *
 * Returns: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	while (n > 0)
	{
		s[a] = b;
		a++;
		n--;
	}
	return (s);
}

