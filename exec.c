#include "shell.h"

void execute(char* my_cmd)
{

	char* args[] = {my_cmd, NULL};

	if (execve(args[0], args, __environ) < 0)
	{
		perror("Error");
	}
}

