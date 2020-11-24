#include "shell.h"
/**
 *main - point to started program
 *@argc: int
 *@argv: char
 *@env: char
 *Return: Always 0.
 */
int main(int __attribute__((unused)) argc, char **argv, char **env)
{
	size_t status = 0;
	int i = 0;
	char *str,  **ch, *line, **tokens;

	str = search_var("PATH", env);
	 ch  = split_string(str, ":=");
	 char **ch2 = ch + 1;

	 while (TRUE)
	 {
		prompt(STDIN_FILENO, buf);
		line = _getline(stdin);
		if (_strcmp(line, "\n", 1) == 0)
		{
			free(line);
			continue;
		}
		tokens = tokenizer(line);
		if (tokens[0] == NULL)
			continue;
		builtin_status = builtin_execute(tokens);
		if (builtin_status == 0 || builtin_status == -1)
		{
			free(tokens);
			free(line);
		}
		if (builtin_status == 0)
			continue;
		if (builtin_status == -1)
			_exit(EXIT_SUCCESS);
		flag = 0; /* 0 if full_path is not malloc'd */
		path = _getenv("PATH");
		fullpath = _which(tokens[0], fullpath, path);
		if (fullpath == NULL)
			fullpath = tokens[0];
		else
			flag = 1; /* if fullpath was malloc'd, flag to free */
		child_status = child(fullpath, tokens);
		if (child_status == -1)
			errors(2);
		free_all(tokens, path, line, fullpath, flag);
	}
	return (0);
}
