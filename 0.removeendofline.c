#include "shell.h"

void remove_endofline(char line[])
{
	int i = 0;
	while (line[i] != '\n')
	{
		i++;
	}
	line[i] = '\0';
}
