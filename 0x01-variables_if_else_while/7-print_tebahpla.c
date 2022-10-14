#include <stdio.h>

/** main - Prints the reverse of lower case alphabets
 *
 * Return: Always 0.
 */
int main(void)
{
	char h;

	for (h = 'z'; h >= 'a'; h--)
		putchar(h);

	putchar('\n');

	return (0);
}
