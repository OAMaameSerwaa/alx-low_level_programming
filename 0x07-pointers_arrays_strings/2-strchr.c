#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: source string
 * @c: character to find in s
 *
 * Return: pointer to first occurence of c, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
