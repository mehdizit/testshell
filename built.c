#include "shell.h"
/**
 *_built - fork and execute
 *@ar: char
 *@argv: char
 *@env: char
 *@s:char
 *@i:integer
 *Return: 0 on success
 */
int _built(char **ar, char **argv, char **env, char **s, int i)
{
	char *ptr = NULL;
	char *str = NULL;

	if (ar != NULL && !(_strcmp(ar[0], "exit")))
		return (1);
	else if (ar != NULL && !(_strcmp(ar[0], "env")))
		_getenv(env);
	else if (ar != NULL && access(ar[0], F_OK) == -1)
	{
		ptr = ar[0];
		ar[0] = _cat_token_path(s, ar[0]);
		if (ar[0] == NULL)
		{
			ar[0] = _strdup("(nil)");
			str = _atoi(i);
			ERROR(argv[0], str, ptr);
			free(str);
		}
		free(ptr);
	}
	if (ar != NULL && _strcmp(ar[0], "(nil)"))
		execute(ar);

	return (0);
}
