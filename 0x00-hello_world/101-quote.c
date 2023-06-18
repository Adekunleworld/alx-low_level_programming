#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints a specific message to the standard error
 * Return: 1
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = 59;

	if (write(2, msg, len) != len)
		return (1);
	return (1);
}

