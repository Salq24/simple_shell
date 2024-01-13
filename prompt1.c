#include "shell.h"


int main()
{
	while (1)
	{
		prompt();
		char *typein[];
		fgets(typein, sizeof(typein), stdin);
		{
			printf("\n");
			break;
		}
		typein[strlen(typein) - 1] = '\0';
		execute(typein);
	}
	return 0;
}
