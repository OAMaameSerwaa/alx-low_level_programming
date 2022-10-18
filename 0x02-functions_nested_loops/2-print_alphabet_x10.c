#include "main.h"

/**
 * print_alphabet_x10 - repeats the print_alphabet 10 times.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char s;

	for (i = 0; i < 10; ++i)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}
		_putchar('\n');
	}
}
