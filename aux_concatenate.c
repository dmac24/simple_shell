#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: Destiny.
 * @src: Source.
 *
 * Return: Always (0).
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++, ++i)
		dest[i] = src[j];

	dest[i] = '\0';

	return (dest);
}
