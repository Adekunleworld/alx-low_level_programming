#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s);
int _is_palindrome(char *s, int len);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (1);

	while (*(s + len) != '\0')
		len++;

	return (_is_palindrome(s, len - 1));
}

/**
 * _is_palindrome - Helper function to check if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of the string.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int _is_palindrome(char *s, int len)
{
	if (len <= 0)
		return (1);

	if (*s != *(s + len))
		return (0);

	return (_is_palindrome(s + 1, len - 2));
}
