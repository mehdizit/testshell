#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	system("ps -f");
	printf("\n\n\n\n");
	fork();                     /*duplication_system_process*/
	system("ps -f");

	return(0);
}
