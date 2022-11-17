#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - print a char
 * @arg: list of arguments pointing to char
 * Return: void
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_string - prints a string
 * @arg: list of arguments pointing to string
 * Return: void
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_int - prints an int
 * @arg: list of arguments pointing to integer
 * Return: void
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - prints a float
 * @arg: list of arguments pointing to float
 * Return: void
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	int i = 0, j = 0;
	print_t p[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"f", print_float}
	};
	
	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		
		i++;
	}

	printf("\n");

	va_end(args);
}
