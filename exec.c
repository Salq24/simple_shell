#include "shell.h"

void execute(char* my_cmd)
{
	char* delim = " ";
	char* tkn;

	tkn = strtok(my_cmd, delim);

	while (tkn != NULL)
	{
	char* args[2];
	args[0] = tkn;
	args[1] = NULL;

	execve(args[0], args, NULL);
	}

	perror("Error");
}

