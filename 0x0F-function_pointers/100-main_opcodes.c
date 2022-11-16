#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print the opcodes of this program
 * @a: address of main function
 * @n: number of bytes to print
 *
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%.2hhx", a[b]);
		if (b < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, i);
	return (0);
}
