#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i, j, a;
	char *str;
	const char t_arg[] = "cifs";

	va_start(args, format);

	i = 0, a = 0;
	while (format && format[i] != '\0')
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && a)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int)), a++;
			break;
		case 'i':
			printf("%d", va_arg(args, int)), a++;
			break;
		case 'f':
			printf("%f", va_arg(args, double)), a++;
			break;
		case 's':
			str = va_arg(args, char *), a++;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args);	
}
