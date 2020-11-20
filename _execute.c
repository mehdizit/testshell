#include "shell.h"


int _execute(char **av)
{
	pid_t child_pid;

	child_pid = fork();
	if (child_pid == -1)
		return (1);

	if (child_pid == 0)
	{
		if (execve(av[0], av, NULL) == -1)
			exit(1);
	}
	else
	{
		wait(NULL);
		return (0);
	}

	return (0);
}

