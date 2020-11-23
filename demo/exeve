#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/home/mahdi/holbertonschool-low_level_programming", NULL};

    printf("Before execve\n");
    
    execve(argv[0], argv, NULL);
    
    printf("After execve\n");
    return (0);
}
