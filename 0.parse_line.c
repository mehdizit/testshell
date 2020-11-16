int process_line(char* args[], char line[])
{
        int i = 0;
        args[i] = strtok(line, " ");
        if (args[i] == NULL)
        {
                return (1);
        }
        
        while (args[i] != NULL)
        {
                i++;
                args[i] = strtok(line, " ");
        }

        
        return (1);
}
