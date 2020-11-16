/*
 * File: 0.main.c
 * Auth:
 */

#include "shell.h"

/**
 *main - point to started program
 *@args: int
 *@argv: char
 *Return: Always 0.
 */
int main(int args, char *argv[])
{
	char line[MAX_CHAR];
	int status;

	argv[MAX_WORD];
	while (read_parse_line(argv, line))
	{
		pid_t child_pid = fork();

		if (child_pid == 0)
		{
			_execve();
		}
		else
		{
			waitpid(child_pid, &status, 0);
		}
	}
	return (0);
}
