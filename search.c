#include "shell.h"
/**
 *search_var - search fo path binary to be executed
 *@str: char
 *@env: array of string for PATH
 *Return: NULL.
 */
char *search_var(char *str, char **env)
{
	int i, j;

	if ((str == NULL) || (env) == NULL)
		return (NULL);
	for (i = 0; env[i] != NULL; i++)
	{
		j = 0;
		while (str[j] != '\0' && str[j] == env[i][j])
			j++;
		if (str[j] == '\0')
			return (env[i]);
	}
	return (NULL);
}
