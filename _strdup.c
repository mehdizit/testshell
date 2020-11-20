#include "shell.h"


char *_strdup(char *str)
{
	char *dup;
	int i;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i])
		i++;

	dup = malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
		return (NULL);

	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}

	dup[i] = '\0';

	return (dup);
}
