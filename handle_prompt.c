#include "shell.h"

/**
 * print_prompt - prints a new prompt
 *
 * Return: always void
 */

void print_prompt(void)
{
	char *new_prompt = "\n$ ";

	write(STDIN_FILENO, new_prompt, 3);
}
