#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints all arguments passed into it
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
