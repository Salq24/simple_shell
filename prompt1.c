#include "shell.h"


int main(void)
{
	char typein[];

	while (1)
	{
		prompt();
		if (fgets(typein, sizeof(typein), stdin) == NULL)
		{
			printf("\n");
			break;
		}
		typein[strlen(typein) - 1] = '\0';
		execute(typein);
	}
	return 0;
}
