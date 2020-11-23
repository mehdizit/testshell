#include "shell.h"
/**
 *free_array - free allocated memory
 *@ch: array of string to be free
 */

void free_array(char **ch)
{
	int i = 0;

	if (ch == NULL)
		return;
	while (ch[i] != NULL)
	{
		free(ch[i]);
		i++;
	}
	free(ch);
}
