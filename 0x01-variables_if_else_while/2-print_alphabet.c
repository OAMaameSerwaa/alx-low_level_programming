#include <stdio.h>

/**
 * main - print alphabets in lower case
 *
 * Return: Always 0
 */
int main(void)
{
	char h;

	for (h = 'a'; h <= 'z'; h++)
		putchar(h);

	putchar('\n');

	return (0);
}
