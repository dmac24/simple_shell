#include "main.h"

/**
 * Run - Check if is built-in
 *
 * @Arg_str: argument string.
 * @ct_output: output.
 * @row: row arguments.
 *
 * Return: returns other than exit or env
 */

int Run(char **Arg_str, int ct_output, char *row)
{
	char *built_box[2] = {"exit", "env"};

	if (*Arg_str == NULL)
		return (1);

	else if (_strcmp(built_box[0], Arg_str[0]) == 0)
		return (built_in(Arg_str, ct_output, row));

	else if (_strcmp(built_box[1], Arg_str[0]) == 0)
		return (built_in(Arg_str, ct_output, row));

	else
		return (comp_Arg(Arg_str, ct_output));
}
