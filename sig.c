#include "main.h"

/**
 * _signal - Checks signal
 *
 * @sig: signal.
 */

void _signal(int sig)
{
	if (sig == SIGINT)
		write(STDOUT, "\nYou can't kill me\n", 19);
}
