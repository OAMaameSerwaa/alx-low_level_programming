#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: source string
 * @dest: destiation string
 *
 * Return:pointer to the resulting string
 */
char *_strcat(char *dest, char *src);
{
	int a = 0;
	int b = 0;

	while (dest[a++])
		b++;
	for (a = 0; src[a]; a++)
		dest[b++] = src[a];
	return (dest);
}
