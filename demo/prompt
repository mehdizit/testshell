#include "shell.h"

/**
 * main - prints "$ ", wait for the user to enter a command,
 * prints it on the next line
 * Return: Always 0
 */

int _getline(void)
{
	
	char* buff = NULL;
	size_t len = 0;
	printf("$ ");
	
while (getline(&buff, &len, stdin) != -1)
	{
		printf("%s\n", buff);
		printf("$ ");
	}
}
