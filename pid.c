#include "main.h"

/**
 * _fork - Create a child process
 *
 * @Arg_str: argument string
 * @ct_output: output.
 *
 * Return: output.
 */

int _fork(char **Arg_str, int ct_output)
{
	pid_t pid;
	int sts;

	pid = fork();

	if (pid == 0)
	{
		if (execve(Arg_str[0], Arg_str, NULL) == -1)
			perror("Error: execve");
	}

	else if (pid == -1)
		perror("Error: Fork failure");

	else
	{
		wait(&sts);

		if (WIFEXITED(sts))
			ct_output = WEXITSTATUS(sts);
	}

	return (ct_output);
}
