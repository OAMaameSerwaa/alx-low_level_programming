#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy
 * Return: pointer to array or null
 */
char *_strdup(char *str)
{
	char *strd;
	int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	strd = malloc(sizeof(*str) * i);
	if (strd == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		strd[j] = str[j];
		j++;
	}
	return (strd);
}
