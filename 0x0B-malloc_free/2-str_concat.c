#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to new space in memory or null if failure
 */
char *str_concat(char *s1, char *s2)
{
	char *strC;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	strC = malloc(sizeof(char) * (i + j + 1));
	if (strC == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		strC[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		strC[i] = s2[j];
		i++, j++;
	}
	strC[i] = '\0';
	return (strC);
}
