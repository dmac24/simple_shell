#include "main.h"

/**
 * check_path - Check_path.
 *
 * @Arg_str: argument string.
 *
 * Return: CP_arg
 *
 */

char *check_path(char **Arg_str)
{
	char *CP_PATH = NULL, *path = NULL;
	char *env = NULL, *CP_Arg = NULL, *len_env = NULL;
	size_t size_CP_Arg, size;
	struct stat st;

	env = get_env();

	if (env != NULL)
	{
		CP_Arg = Arg_str[0];

		size_CP_Arg = _strlen(CP_Arg);
		len_env = malloc(sizeof(char) * _strlen(env) + 1);
		len_env = _strcpy(len_env, env);
		path = strtok(len_env, ":");

		while (path != NULL)
		{
			size = _strlen(path) + size_CP_Arg + 2;
			CP_PATH = malloc(sizeof(char) * size);

			CP_PATH = _strcpy(CP_PATH, path);
			CP_PATH = _strcat(CP_PATH, "/");
			CP_PATH = _strcat(CP_PATH, CP_Arg);

			if (stat(CP_PATH, &st) == 0 && st.st_mode & X_OK)
			{
				free(len_env);
				return (CP_PATH);
			}

			path = strtok(NULL, ":");
			free(CP_PATH);
		}
		free(len_env);
	}
	return (CP_Arg);
}
