#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program assigns a random number to the variable n each time
 * it is executed and prints the last digit of the number along with a corresponding message.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand();
	lastDigit = n % 10;

	printf("Last digit of %d is ", n);
	if (lastDigit > 5)
	{
		printf("%d and is greater than 5\n", lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("%d and is 0\n", lastDigit);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", lastDigit);
	}

	return 0;
}
