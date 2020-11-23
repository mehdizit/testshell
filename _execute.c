#include "shell.h"
/**
 *execute - generate child process and wait to execute with execve
 *@str: array of sting
 *Return: Always 0.
 */

int execute(char **str)
{
	pid_t child_pid;

	child_pid = fork();
	if (child_pid == -1)
		return (1);

	if (child_pid == 0)
	{
		if (execve(str[0], str, NULL) == -1)
			exit(1);
	}
	else
	{
		wait(NULL);
		return (0);
	}

	return (0);
}
