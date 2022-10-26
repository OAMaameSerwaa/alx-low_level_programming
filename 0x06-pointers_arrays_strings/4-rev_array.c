#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array of integers
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n);
{
	int i, x;

	for (x = n - 1; x >= n / 2; x--)
	{
		i = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = i;
	}
}
