#include "shell.h"

int _execve(void)
{
	char *argv[] = {"/bin/ls", "-l", "/home/mahdi/holbertonschool-low_level_programming", NULL};

 
    
    execve(argv[0], argv, NULL);
    
    
    return (0);
}
	
