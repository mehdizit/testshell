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

int main(int __attribute__((unused)) argc, char **argv, char **env)
{
	(void) argv;
	size_t status = 0;
	int i = 0;
	char *str; 
	char **ch;
	char *line, **tokens;
	 str = search_var("PATH", env);
	 ch  = split_string(str,":=");
	char** ch2 = ch + 1;
	while (1)
	{
		status = 0;
		line = NULL;
		tokens = NULL;
		i++;
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
			if (line[0] == '\n')
			{
				free(line);
				line = NULL;
			}
		}
		if (line != NULL)
		{
			tokens = split_string(line, "\n ");
			free(line);
		}
		if (_built(tokens, argv, env, ch2, i,0))
			break;
			free_array(tokens);
	}
	free_array(ch);
	free_array(tokens);
	return (0);
}
