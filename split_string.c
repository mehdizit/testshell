
#include "shell.h"

int _getline(void)
{
	
	char* buff = NULL;
	size_t len = 0;
	printf("$ ");
	
while (getline(&buff, &len, stdin) != -1)
	{
		printf("%s\n", buff);
		printf("$ ");
	}
}


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

int main(int ac, char **av)
{
	char *stream;
	stream = _getline();
	av = _parse(stream);
	printf("%s", av);
	
/*	char **stream;
	int i = 0;

	stream = _parse(av[1]);
	while (stream[i] != NULL)
	{
		printf("%s\n", stream[i]);
		free(stream[i]);
		i++;
	}
	free(stream);
	return (0);

*/
	
}




	
