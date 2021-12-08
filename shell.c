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
		write(STDOUT, "$ ", 2);

		row = rd_row();
		tokens = tokenizer(row);
		ct_output = Run(tokens, ct_output, row);

		free(row);
		free(tokens);
	}

	return (0);
}
