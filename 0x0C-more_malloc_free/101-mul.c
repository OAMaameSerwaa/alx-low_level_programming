#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - Finds the length of a string
 *  @str: The string which is to be measured
 *  Return: The length of the string
 */
int find_len(char *str)
{
	int leng = 0;

	while (*str++)
		leng++;
	return (leng);
}

/**
 * create_xarray - Creates an array of chars and initializes it with 'x'
 * @size: size of the array to be initialized
 * Description: for insufficient space,  function exits with a status  98
 * Return: pointer to the array
 */
char *create_xarray(int size)
{
	char *array;
	int i;

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		exit(98);
	for (i = 0; i < (size - 1); i++)
		array[i] = 'x';
	array[i] = '\0';
	return (array);
}

/**
 * iterate_zeroes - iterates through numbers till it hits non-zero number
 * @str: string of numbers to be iterate through
 * Return: A pointer to the next non-zero number
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;
	return (str);
}

/**
 * get_digit - Converts a digit character to a corresponding int
 * @c: character to be converted
 * Description: If c is a non-digit, function exits with a status 98
 * Return: the converted int
 */
int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (digit);
}

/**
 * get_prod - multiplies a string of numbers by a single digit
 * @prod: the buffer to store the result
 * @mult: the string of numbers
 * @digit: the single digit
 * @zeroes: the necessary number of leading zeroes
 * Description: If mult contains a non-digit, function exits with a status 98
 */
void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}
	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}
		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * add_nums - adds the numbers stored in two strings
 * @final_prod: the buffer storing the running final product
 * @next_prod: the next product to be added
 * @next_len: the length of next_prod
 */
void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;
	while (*(next_prod + 1))
		next_prod++;
	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;
	}
	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
 * main - multiplies two positive numbers
 * @argv: number of arguments passed to the program
 * @argc: array of pointers to the arguments
 * Description: if number of arguments is incorrect, function exits 98
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *final_p, *next_p;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_len(argv[1]) + find_len(argv[2]);
	final_p = create_xarray(size + 1);
	next_p = create_xarray(size + 1);

	for (index = find_len(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_digit(*(argv[2] + index));
		get_p(next_p, argv[1], digit, zeroes++);
		add_nums(final_p, next_p, size - 1);
	}
	for (index = 0; final_p[index]; index++)
	{
		if (final_p[index] != 'x')
			putchar(final_p[index]);
	}
	putchar('\n');

	free(next_p);
	free(final_p);

	return (0);
}



