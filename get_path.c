#include "main.h"

/**
 * get_env - Get path.
 *
 * Return: PATH.
 */

char *get_env(void)
{
	int i;
	char **env = NULL, *Oper = NULL;

	env = environ;

	for (i = 0; env[i] != NULL; i++)
	{
		if (_strncmp("PATH", env[i], 4) == 0)
			Oper = env[i];
	}

	if (Oper != NULL)
	{
		while (*Oper != '=')
			Oper++;

		Oper++;
	}

	return (Oper);
}
