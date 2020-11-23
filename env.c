#include "shell.h"
/**
 *_getenv - print environnment
 *@name: char
 *Return: Always 0.
 */

int _getenv(char **name)
{
	int i = 0;

	while (name[i])
	{
		write(STDOUT_FILENO, name[i], _strlen(name[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (0);
}
