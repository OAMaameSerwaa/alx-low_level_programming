#include <stdio.h>

/**
 * main - Prints alphabets in lower case, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char h;
	for (h = 'a'; h <= 'z'; h++)
	{
		if (h != 'e' && h != 'q')
			putchar(h);
	}

	putchar('\n');

	return (0);
}
