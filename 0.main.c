#include "shell.h"

int main()
{
        char* args[MAX_WORD];
        char line[MAX_CHAR];
        int status;

        while (read_parse_line(args, line))
        {
                pid_t child_pid = fork();
                if (child_pid == 0)
                {
                        execvp(args[0], args);
                }
                else
                {
                        waitpid(child_pid, &status, 0);
                }
        }
        return (0);
}
