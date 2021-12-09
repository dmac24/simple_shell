#include "main.h"

/**
 * tokenizer - Analyze arguments in tokens.
 *
 * @BUFF: bring arguments.
 *
 * Return: Arg_str.
 */

char **tokenizer(char *BUFF)
{
	char *token = NULL;
	char **Arg_str = NULL;
	int i = 0, size = 0;

	while (BUFF[size] != '\0')
		size++;

	Arg_str = malloc(sizeof(char *) * size);


	token = strtok(BUFF, DELIM);
	Arg_str[i] = token;

	for (i = 1; token != NULL; i++)
	{
		token = strtok(NULL, DELIM);
		Arg_str[i] = token;
	}

	return (Arg_str);
}
