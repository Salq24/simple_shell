#include "shell.h"

void execute(char* command)
{

	char* args[2];

	args[0]	= command;
	args[1] = NULL;

	if (execve(args[0], args, NULL) < 0)
	{
		perror("Error");
	}
}

