#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_c - print a character
 * @c: char to be printed
 * Return: void
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_s - prints a string
 * @s: string to be printed
 * Return: void
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_f - prints a float
 * @f: float to be printed
 * Return: void
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed into the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, n;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	va_list valist;
	char *separator = "";

	va_start(valist, format);
	i = 0;
	while (format && format[i])
	{
		n = 0;
		while (p[n].t != NULL)
		{
			if (*(p[n].t) == format[i])
			{
				printf("%s", separator);
				p[n].f(valist);
				sep = ", ";
				break;
			}
			n++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
