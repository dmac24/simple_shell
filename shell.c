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
		signal(SIGINT, _signal);

		write(STDOUT, "#holbies$ ", 9);

		row = rd_row();
		tokens = tokenizer(row);
		ct_output = Run(tokens, ct_output, row);

		free(row);
		free(tokens);
	}

	return (0);
}
