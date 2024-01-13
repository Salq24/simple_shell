#include "shell.h"

void execute(char* cmd)
{
	char* agmt[] = {cmd, NULL};
	execve(agmt[0], agmt, NULL);
	perror("Error");
}

