#include "shell.h"

int _built(char **array, char **env)
{
	if (array != NULL && _strcmp(array[0], "(nil)"))
		_execute(array);
	return (0);
}
