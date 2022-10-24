#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: first integer for swap.
 * @b: second integer for swap.
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
