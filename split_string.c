
#include "shell.h"

char **_parse(char *str)
{
	int bufsize = BUFSIZE, i;
	char **tab, **tab2;
	char *token;
	tab = malloc(sizeof(char) * (bufsize));

	if (!tab)
	{
		printf("error");
	}
	token = strtok(str, DELIM);

	while (token != NULL)
	{
		tab[i] = token;
		i++;
		if (i >= bufsize)
		{
			bufsize = bufsize + BUFSIZE;
			tab2 = tab;
			tab = realloc(tab, bufsize * sizeof(char));
		}
		if (!tab)
		{
			free(tab2);
			printf("error");
		}
	}
	token = strtok(NULL, DELIM);
	tab[i] = NULL;
	return tab;
}

int main(int argc, char *argv[])
{
	char **stream;
	int i = 0;
	(void)argc;

	stream = _parse(argv[i]);
	while (stream[i] != NULL)
	{
		printf("%s\n", stream[i]);
		free(stream[i]);
		i++;
	}
	free(stream);
	return (0);
}




	
