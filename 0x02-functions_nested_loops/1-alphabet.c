#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet in lowercase.
 *
 * Return: Always 0 (Succes).
 */
void print_alphabet(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		_putchar(s);
	}

	_putchar('\n');

}
