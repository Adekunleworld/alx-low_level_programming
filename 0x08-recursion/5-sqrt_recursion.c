#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root of 'n' if it exists, otherwise -1.
 */
int _sqrt_recursion(int n);
int helper(int low, int high, int n);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root of 'n' if it exists, otherwise -1.
 */
int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (helper(n, n, 0));
}

/**
 * helper - Recursive helper function to find the square root
 * @low: The lower bound of the search range
 * @high: The upper bound of the search range.
 * @n: The number to find the square root of.
 *
 * Return: The square root of 'n' if it exists, otherwise -1.
 */
int helper(int low, int high, int n)
{
	int mid;

	if (low > high)
		return (-1);

	mid = (low + high) / 2;

	if (mid * mid == n)
		return (mid);

	if (mid * mid < n)
		return (helper(mid + 1, high, n));

	return (helper(low, mid - 1, n));
}
