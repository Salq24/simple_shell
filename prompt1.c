#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints "$ ", wait for the user to enter a command
 * prints it on the next line
 *
 * Return: void
 */

int main(void)
{
	char *prt = NULL;
	size_t pn = 0;
	ssize_t strm;

	printf("$ ");
	strm = getline(&prt, &pn, stdin);

	if (strm == -1)
	{
		printf("Error");
	}
	printf("%s", prt);

	free(prt);

	return (0);
}

