#include <stdio.h>

/**
 * main - Print the number of args
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
