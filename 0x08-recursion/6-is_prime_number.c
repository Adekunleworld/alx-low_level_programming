#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Checks if number is prime.
 * @n: The number to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	if (n == 2)
		return (1);

	if (n % i == 0)
		return (0);

	i++;

	if (i * i <= n)
		return (is_prime_number(n));

	return (1);
}
