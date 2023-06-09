#include "main.h"

/**
 * create_new_path - integrate np[np] to input
 *
 * @command: user-specified input
 * @np: np of input
 *
 * Creating new  path
 *
 * Return: np on success or NULL
 */

char *create_new_path(char *np, char *command)
{
	int val = 2;

	size_t f = 0, s = 0;

	char *bfr;

	if (command == 0 && np == 0)
	{
		command = "";
		np = "";
	}

	bfr = malloc(sizeof(char) * (_len_str(np) + _len_str(command) + val));

	if (bfr == NULL)
	{
		return (NULL);
	}

	while (np[f])
	{
		bfr[f] = np[f];
		f++;
	}

	if (np[f - 1] != '/')
	{
		bfr[f] = '/';
		f++;
	}

	while (command[s])
	{
		bfr[f + s] = command[s];
		s++;
	}

	bfr[f + s] = '\0';

	return (bfr);
}
