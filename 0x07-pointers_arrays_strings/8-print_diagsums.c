#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints sum of two diagonals of square matrix
 * @a: the matrix
 * @size: the size
 *
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
