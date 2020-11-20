#include "shell.h"



char **split_line(char *str, const char *delim)
{
        int i = 0;
	char *str1 = NULL, *str2 = NULL, *ptr = NULL, **ar = NULL;

	if (((str) == NULL) || ((delim) == NULL))
		return (NULL);
	str1 =  _strdup(str);
	str2 =  _strdup(str);

	if (!(str1) || !(str2))
		return (NULL);
	ptr = strtok(str1, delim);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; ptr != NULL; i++)
	{
		ptr = strtok(NULL, delim);
	}
	ar = malloc(sizeof(char *) * (i + 1));
	if (ar == NULL)
		return (NULL);
	ptr = strtok(str2, delim);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; ptr != NULL; i++)
	{
		ar[i] = _strdup(ptr);
		ptr = strtok(NULL, delim);
	}
	printf("%s" "%s", *ar, ptr);
	ar[i] = NULL;
	free(str1);
	free(str2);
	return (ar);
}
