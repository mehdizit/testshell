#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int read_parse_line(char* args[], char line[]);
int process_line(char* args[], char line[]);
void read_line(char line[]);
void remove_endofline(char line[]);
#define MAX_WORD 10
#define MAX_CHAR 100
#define DEL " "

#endif

