#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char mapping_low[8] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};
	char mapping_upper[8] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'};
	int i = 0;
	char replacement = str;
	
	while (i < 8)
	{
		if (str == mapping_low[i] || str == mapping_upper[i])
		{
			replacement = i + '0';
			break;
		}
		i++;
	}

	return (replacement);
}
