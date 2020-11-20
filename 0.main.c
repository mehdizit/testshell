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
	char **array;
	char **ch = split_line(search_var("PATH", env), ":=");
	char **ch2 = ch + 1;


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
			free(line);
		}
		if _built((array, ch2))
			break;
		/*	free_array(array);*/
	}
}
		
		

