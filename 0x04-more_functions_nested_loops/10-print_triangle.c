#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int hash, tri;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (tri = size - hash; tri > 0; tri--)
				putchar(' ');

			for (tri = 0; tri < tri; tri++)
				_putchar('#');

			if (hash == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

