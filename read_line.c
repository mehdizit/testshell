#include "shell.h"



void read_line(char line[])
{
	printf("$ ");
	char* ret = fgets(line,MAX_CHAR,stdin);
	remove_endofline(line);
	if (strcmp(line, "exit") == 0 || ret == NULL)
		exit(0);

}
