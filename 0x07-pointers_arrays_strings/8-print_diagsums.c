#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The pointer to the first element of the matrix.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	/* Calculate the sum of the main diagonal */
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
	}

	/* Calculate the sum of the secondary diagonal */
	for (i = 0; i < size; i++)
	{
		sum2 += *(a + i * size + (size - 1 - i));
	}

	printf("Sum of the main diagonal: %d\n", sum1);
	printf("Sum of the secondary diagonal: %d\n", sum2);
}
