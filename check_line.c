#include "main.h"

/**
 * rd_row - Read the line.
 *
 * Return: arguments.
 */

char *rd_row(void)
{
	char *BUFF = NULL;
	size_t BUFF_SIZE = 0;
	int line = 0;

	line = getline(&BUFF, &BUFF_SIZE, stdin);

	if (line == EOF)
	{
		free(BUFF);

		if (isatty(STDIN) != 0)
			write(STDOUT, "\n", 1);

		exit(EXIT_SUCCESS);
	}

	return (BUFF);
}
