#include "shell.h"




char *search_var(char *str, char **env)
{
	int i, j;

	if ((str == NULL) || (env) == NULL)
		return (NULL);
	
	for (j = 0; env[j] != NULL; j++)
	{
		i = 0;
	
		while (str[i] != '\0' && str[i] == env[j][i])
			i++;
		if (str[i] == '\0')
			return (env[j]);
		
	}
	return (NULL);
}
