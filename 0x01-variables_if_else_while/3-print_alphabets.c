#include <stdio.h>
/**
 * main - print lower case alphabets, then upper case
 * 
 * Return: Always 0
 */
int main(void)
{
	char h;

	for (h = 'a'; h <= 'z'; h++)
	{
		putchar(h);
	}

	for (h = 'A'; h <= 'Z'; h++)
	{
		putchar(h);
	} 

	putchar('\n');

	return (0);
}
