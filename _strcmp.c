#include "shell.h"

/**
 * _strcmp - Compares two strings.
 *@s1:  string.
 * @s2: string.
 * Return: Integer.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
