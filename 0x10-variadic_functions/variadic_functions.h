#ifndef VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>
/**
 * struct print - print type with corresponding print function
 * @t: print type
 * @fn: print function
 */
typedef struct print
{
	char *t;
	void (*fn)(va_list);
} print_t;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
