#include "shell.h"

int _built(char **ar, char **argv, char **env, char **p_t, int i)
{
	
	char *ptr = NULL;
	char *str = NULL;

	if (ar != NULL && !(_strcmp(ar[0], "exit")))
	{
		
			return (1);
	}
	else if (ar != NULL && !(_strcmp(ar[0], "env")))
	{
		print_env(env);
	}
	else if (ar != NULL && access(ar[0], F_OK) == -1)
	{
		ptr = ar[0];
		ar[0] = smart_cat(p_t, ar[0]);
		if (ar[0] == NULL)
		{
			ar[0] = _strdup("(nil)");
			str = _itoa(i);
			ERR_EXE(argv[0], str, ptr);
			free(str);
		}
		free(ptr);
		}
	if (ar != NULL && _strcmp(ar[0], "(nil)"))
		execute(ar);

	return (0);
}
