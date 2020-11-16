#include "shell.h"
/**
 *read_parse_line - read token of line stream
 *@args: char
 *@line: char
 *Return: 1 if true
 */

int read_parse_line(char *args[], char line[])
{
	read_line(line);
	process_line(args, line);
	return (1);
}
