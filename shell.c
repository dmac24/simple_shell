#include "main.h"

/**
 * main - start shell.
 *
 * Return: (0).
 */

int main(void)
{
	char *row = NULL;
	char **tokens = NULL;
	int ct_output = 0;

	while (1)
	{
		if (isatty(STDIN))
			write(STDOUT, "#holbies$ ", 10);

		row = rd_row();
		tokens = tokenizer(row);
		ct_output = Run(tokens, ct_output, row);

		free(row);
		free(tokens);
	}

	return (0);
}
