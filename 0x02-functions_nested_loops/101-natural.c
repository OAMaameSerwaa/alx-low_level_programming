#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, c;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			c += i;
	printf("%d\n", c);
	return (0);
}



