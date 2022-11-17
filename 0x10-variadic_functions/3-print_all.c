#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_c - print a char
 * @c: char to be printed
 * Return: void
 */
void print_c(va_list c)
{
	char letter;

	letter = va_arg(c, int);
	printf("%c", c);
}

/**
 * print_s - prints a string
 * @s: string to be printed
 * Return: void
 */
void print_s(va_list s)
{
	char *str;

	str = va_arg(s, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_i - prints an int
 * @i: int to be printed
 * Return: void
 */
void print_i(va_list i)
{
	int num;

	num = va_arg(i, int);
	printf("%d", num);
}

/**
 * print_f - prints a float
 * @f: float to be printed
 * Return: void
 */
void print_f(va_list f)
{
	float num;

	num = va_arg(f, double);
	printf("%f", num);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	char *separator = "";
	int i = 0, j = 0;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	
	va_start(valist, format);
	
	while (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(valist);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);

	printf("\n");
}
