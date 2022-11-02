#include "main.h"

/**
 * prime_check - checks to see if number is prime
 * @a: factor check
 * @p: possible prime number
 *
 * Return: 1 if prime, 0 if otherwise
 */
int prime_check(int a, int p)
{
	if (p < 2 || p % a == 0)
		return (0);
	else if (a > p / 2)
		return (1);
	else
		return (prime_check(a + 1, p));
}

/**
 * is_prime_number - states if number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
