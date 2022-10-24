#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to be reversed.
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l = 0, x = 0;
	char swp;

	while (s[x++])
		l++;

	for (x = l - 1; x >= l / 2; x--)
	{
		swp = s[x];
		s[x] = s[l - x - 1];
		s[l - x - 1] = swp;
	}
}
