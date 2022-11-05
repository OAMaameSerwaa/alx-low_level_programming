#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 *  Return: 1 on sucess, -1 is returned on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
