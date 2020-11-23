#include "shell.h"

/**
 *_atoi - convert integer to char
 *@num: integer to be converted
 * Return: character string of number
 */

char *_atoi(int num)
{
	char *s;
	int i = 0;

	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	s[i] = '\0';
	while (i--)
	{
		s[i] = (num % 10) + '0';
		num /= 10;
	}
	return (s);
}
