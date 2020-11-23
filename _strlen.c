#include "shell.h"

/**
 * _strlen - length of a string.
 *
 * @s: char
 * Return: Length of string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}
