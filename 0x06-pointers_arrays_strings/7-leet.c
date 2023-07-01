#include "main.h"


/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: The encoded string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leetChars = "aAeEoOtTlL";
	char *leetNums = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leetChars[j] != '\0'; j++)
		{
			if (str[i] == leetChars[j])
			{
				str[i] = leetNums[j];
				break;
			}
		}
	}

	return (ptr);
}
