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
int main(int argc, char **argv, char **env)
{
	char *line = NULL;
	size_t status = 0;
	char ** tokens;


	while (1)
	{
		printf("$ ");
		if (getline(&line, &status, stdin) == -1)
		{
			write(STDIN_FILENO, "\n", 1);
			return (1);
			free(line);
			break;
		}
		if (line != NULL)
		{
			tokens = split_line(line, "\n");
			printf ("%s", *tokens);
			free(line);
		}
	}
}
		
		

