#include "shell.h"

void execute_command(const char *command)
{
	pid_t pid = fork();

	if (pid == -1)
	{
		leo_print("Error!!\n");
		exit(FAIL);
	}
	else if (pid == 0)
	{
		char *args[129];
		int arg_count = 0;

		char *token = strtok((char *)command, " ");
		while (token != NULL)
		{
			agrs[arg_count] = NULL;
			token = strtok(NULL, " ");
		}
		args[arg_count] = NULL;
		execvp(args[0], args);

		leo_print("Error\n");
		exit(FAIL);
	}
	else
	{
		wait(NULL);
	}
}
