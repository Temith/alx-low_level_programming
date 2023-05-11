#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - return if the input integer is prime
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime, if not 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculate if a number is prime recursely
 * @n: number to evaluate
 * @i: iteration
 *
 * Return: 1 if the number is prime, if not 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
