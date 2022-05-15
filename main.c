#include "shell.h"

/**
 * main - entry into the shell program
 * @argc: count of cmd line args
 * @argv: pointer to cmd line args
 *
 * Return: Always 0 if successful
 */

int main(int argc, char **argv)
{
	char *cmd;

	(void)argc;
	(void)argv;

	do {
		print_prompt();

		cmd = read_cmd();

		if (!cmd)
		{
			exit(EXIT_SUCCESS);
		}

		if (cmd[0] == '\0' || strcmp(cmd, "\n") == 0)
		{
			free(cmd);
			continue;
		}

		if (strcmp(cmd, "exit\n") == 0)
		{
			free(cmd);
			break;
		}

		printf("%s\n", cmd);

		free(cmd);

	} while (1);

	return (0);
}
