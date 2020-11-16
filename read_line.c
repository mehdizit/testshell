#include "shell.h"
/**
 *read_line - to read the stream input of line
 *@line: stream of character to read
 *
 *Return: Always 0.
 */

void read_line(char *line)
{
	int ret;
	size_t bufsize = 64;
	line = (char *)malloc(bufsize * sizeof(char));
	if( line == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}
	printf("$ ");
	ret = getline(&line,&bufsize,stdin);
	remove_endofline(line);
	if (strcmp(line, "exit") == 0 || ret == 0)
		exit(0);
}









/*{
	char* ret;
	printf("$ ");
	ret = fgets(line,MAX_CHAR,stdin);
	remove_endofline(line);
	if (strcmp(line, "exit") == 0 || ret == NULL)
	exit(0);
	}*/		
