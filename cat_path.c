#include "shell.h"
/**
 *_cat_token_path - split the string PATH into tokens
 *@path: char
 *@cmd: char
 *Return: NULL
 */

char *_cat_token_path(char **path, char *cmd)
{
	char *buff = NULL;
	int i = 0, j = 0, k = 0;

	if (!(path) || !(cmd))
		return (NULL);
	if (cmd[0] == '/')
		return (NULL);
	while (path[k] != NULL)
	{
		buff = malloc(sizeof(char) * (_strlen(path[k]) + _strlen(cmd) + 2));
		if (!(buff))
			return (NULL);
		i = 0, j = 0;
		while (path[k][j])
		{
			buff[i] = path[k][j];
			i++;
			j++;
		}
		buff[i] = '/';
		i++;
		j = 0;
		while (cmd[j])
		{
			buff[i] = cmd[j];
			i++;
			j++;
		}
		buff[i] = '\0';

		if (access(buff, F_OK) == 0)
		{
			return (buff);
		}
		else
			free(buff);
		k++;
	}
	return (NULL);
}
