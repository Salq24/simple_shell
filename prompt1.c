#include "shell.h"


int main()
{
	char typein[BUFFER_SIZE];
	pid_t my_pid;

	while (1)
	{
		prompt();
		
		fgets(typein, sizeof(typein), stdin);
		
		typein[strlen(typein) - 1] = '\0';

		if (feof(stdin))
		{
			break;
		}

		my_pid = fork();

		if (my_pid < 0)
		{
			perror("Error in Forking");
			continue;
		}

		if (my_pid == 0)
		{
			execute(typein);
			exit(0);
		}
		else
		{
			waitpid(my_pid, NULL, 0);
		}
	}
	return 0;
}

