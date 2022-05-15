#include "shell.h"

/**
 * read_cmd - takes cmd from standard input
 *
 * Return: is a pointer to char array.
 */

char *read_cmd(void)
{
	char *buf, *ptr, ptrlen = 0, char *error = "unable to allocate memory";

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		write(STDERR_FILENO, error, strlen(error));
		exit(1);
	}

	while (fgets(buf, 1024, stdin))
	{
		int buflen = strlen(buf);

		if (!ptr)
			ptr = malloc(buflen + 1);
		else
		{
			char *ptr2 = realloc(buf, ptrlen + buflen + 1);

			if (!ptr)
			{
				free(ptr);
				ptr = NULL;
			}
			else
				ptr = ptr2;
		}
		if (buf[buflen - 1] == '\n')
		{
			if (buflen == 1 || buf[buflen - 2] != '\\')
				return (ptr);

			ptr[ptrlen + buflen - 2] = '\0';
			buflen -= 2;
		}
		ptrlen += buflen;
	}
	return (ptr);
}
