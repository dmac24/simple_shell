#include "main.h"

/**
 * _error - Print error.
 *
 * @CMD: command.
 */

void _error(char *CMD)
{
	int length = 0;

	length = _strlen(CMD);

	write(STDERR, CMD, length);
	write(STDERR, ": not found\n", 12);
}
