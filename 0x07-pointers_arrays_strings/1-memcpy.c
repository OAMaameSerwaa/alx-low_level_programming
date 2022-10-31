#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: where to copy the memory
 * @src: the memory area to copy from
 * @n: the number of bytes
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = 0;

	while (n > 0)
	{
		dest[a] = src[b];
		a++;
		b++;
		n--;
	}
	return (dest);
}
