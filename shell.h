#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define TRUE 1
#define ERROR(a, b, c)\
do {\
	write(STDERR_FILENO, a, _strlen(a));\
	write(STDERR_FILENO, ": ", 2);\
	write(STDERR_FILENO, b, _strlen(b));\
        write(STDERR_FILENO, ": ", 2);\
	write(STDERR_FILENO, c, _strlen(c));\
	write(STDERR_FILENO, ": not found", 11);\
	write(STDERR_FILENO, "\n", 1);\
	} while (0)

int _putchar(char c);
char **split_string(char *str, const char *delim);
int execute(char **str);
char *search_var(char *str, char **env);
void free_array(char **array);
char *_atoi(int num);
int _built(char **array, char **argv, char **env, char **p_t, int i);
int _getenv(char **name);
int run_shell(int go);
char *_cat_token_path(char **path, char *name);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
int _strlen(char *s);

char *_itoa(int num);
char *smart_cat(char **path, char *name);


#endif

