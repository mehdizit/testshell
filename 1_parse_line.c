#include "shell.h"
/**
 *split_string - parse read line from input stream into string tokens
 *@str: char
 *@delim: char
 *Return: array of string
 */
char **split_string(FILE *fp)
{
	char *line;
	ssize_t read;
	size_t len;

	line = NULL;
	len = 0;
	read = getline(&line, &len, fp);
	if (read == -1)
	{
		free(line);
		exit(EXIT_SUCCESS);
	}

	return (line);
}

