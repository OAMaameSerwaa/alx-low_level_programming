#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercas
 * @str: The string to be changed
 *
 * Return: changed string
 */
char *string_toupper(char *str);
{
	int x = 0;


	while (str[x])
	{
		if (str[x] >= "a" && str[x] <= "z")
			str[x] -= 32;

		x++;
	}

	return (str);
}
