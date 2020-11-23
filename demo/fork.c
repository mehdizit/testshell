#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	pid_t id;
	system("ps -f");
	id = fork();                     /*duplication_system_process*/
/*	system("ps -f");*/
/*	printf(" v = %i\n\n\n\n", v);*/

	switch( id )
	{
	case -1:
		printf("ERROR !");
		break;
	case 0:
		printf("FILS\n");
		system("ps -f");
		printf("\n");
		break;
	default:
		wait(NULL); /* killed the parent before the current complite her execution*/
		printf("PERE\n");
		system("ps -f");
		printf("\n");
		break;
	}
		
	return(0);
}
