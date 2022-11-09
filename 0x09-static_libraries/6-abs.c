#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @s: the integer to be converted.
 * Return: absolute value of the input number.
 */
int _abs(int s)
{
	if (s < 0)
		s = s * -1;
	return (s);
}
