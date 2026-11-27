#include "main.h"

/**
 * check_divisor - checks if n has a divisor starting from i
 * @n: the number to check
 * @i: the current divisor
 *
 * Return: 1 if n is prime, otherwise 0
 */
int check_divisor(int n, int i)
{
	if (i > n / i)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_divisor(n, i + 1));
}

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_divisor(n, 2));
}
