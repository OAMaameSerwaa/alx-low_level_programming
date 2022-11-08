#include "main.h"
#include <stdlib.h>

/**
 * wrdcnt - counts the number of words in a string
 *  @str: string to count
 *  Return: n of number of words
 */
int wrdcnt(char *str)
{
	int i, n = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int a, b, c, d, n = 0, wct = 0;
	char **string;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	string = (char **)malloc(n * sizeof(char *));
	if (string == NULL)
		return (NULL);
	string[n - 1] = NULL;
	a = 0;
	while (str[a])
	{
		if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
		{
			for (b = 1; str[a + b] != ' ' && str[a + b]; b++)
				;
			b++;
			string[wct] = (char *)malloc(b * sizeof(char));
			b--;
			if (string[wct] == NULL)
			{
				for (c = 0; c < wct; c++)
					free(string[c]);
				free(string[n - 1]);
				free(string);
				return (NULL);
			}
			for (d = 0; d < b; d++)
				string[wct][d] = str[a + d];
			string[wct][d] = '\0';
			wct++;
			a += b;
		}
		else
			a++;
	}
	return (string);
}
