#include "main.h"

/**
 * built_in - commands.
 *
 * @Arg_str: argument string
 * @ct_output: output.
 * @row: row arguments.
 *
 * Return: -1,0
 *
 */

int built_in(char **Arg_str, int ct_output, char *row)
{
	char *built_box[2] = {"exit", "env"};
	int i = 0, size_env;
	char *env = NULL;

	if (_strcmp(built_box[0], Arg_str[0]) == 0)
	{
		free(Arg_str);
		free(row);
		exit(ct_output);
	}

	else if (_strcmp(built_box[1], Arg_str[0]) == 0)
	{
		for (i = 0; environ[i] ; i++)
		{
			env = environ[i];
			size_env = _strlen(env);
			write(STDOUT, env, size_env);
			write(STDOUT, "\n", 1);
		}
	}

	return (0);
}
