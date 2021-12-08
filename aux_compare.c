#include "main.h"

/**
 * _strncmp - compare strings.
 *
 * @string_1: string 1
 * @string_2: string 2
 * @len: Length
 *
 * Return: 0,-1
 *
 */

int _strncmp(char *string_1, char *string_2, int len)
{
	for (; *string_1 && *string_2 && len >= 0; len--)
	{
		if (*string_1 == *string_2)
		{
			string_1++;
			string_2++;
		}

		else
			return (-1);
	}

	return (0);
}


/**
 * _strcmp - Compares 2 strings.
 *
 * @string_1: string 1
 * @string_2: string 2
 * Return: 0
 */

int _strcmp(char *string_1, char *string_2)
{
	int i;

	for (i = 0; string_1[i] != '\0'; i++)
	{
		if (string_1[i] != string_2[i])
			return (string_1[i] - string_2[i]);
	}

	return (0);
}
