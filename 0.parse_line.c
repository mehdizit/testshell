#include "shell.h"

int process_line(char* args[], char line[])
{
        int i = 0;
        args[i] = strtok(line, " ");
        if (args[i] == NULL)
        {
		printf("NO COMMANDE\n");
                return (1);
        }
        
        while (args[i] != NULL)
        {
                i++;
                args[i] = strtok(NULL, " ");
        }

        
        return (1);
}
