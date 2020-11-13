#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define BUFSIZE 1024
#define DELIM " "
char **_parse(char *str);
char *_strdup(char *str);


#endif

