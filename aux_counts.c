#include "main.h"

/**
 * _strlen - Counts string chars.
 *
 * @a: Variable to validate.
 *
 * Return: b
 */

int _strlen(char *a)
{
	int b = 0;

	while (a[b] != '\0')
		b++;

	return (b);
}
