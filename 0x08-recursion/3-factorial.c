#include "main.h"

/**
 * factorial - Calculates the factorial of a number
 * @n: The number to calculate the factorial of
 *
 * Return: The factorial of the given number, or -1 if n is negative
 */
int factorial(int n)
{
	int factorial = 1;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	while (n > 0)
	{
		factorial *= n;
		n--;
	}
	return (factorial);
}
