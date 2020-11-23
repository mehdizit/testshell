#include "shell.h"
/**
 *remove_endofline - remove enf of line stream.
 *@line: char
 *Return: Always 0.
 */

void remove_endofline(char line[])
{
	int i = 0;
	while (line[i] != '\n')
	{
		i++;
	}
	line[i] = '\0';
}
