#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum int of the array
 * @max: maximum int of the array
 * Return: pointer to array or if malloc fails- NULL
 */
int *array_range(int min, int max)
{
	int i, size, *s;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	s = malloc(size * sizeof(*s));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size && min <= max; i++, min++)
		*(s + i) = min;
	return (s);
}
