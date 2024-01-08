#include <stdio.h>

/**
 * main - prints all args without using ac
 * ac: arg count
 * av: arg value
 * Return: args
 */

int main(int ac, char **av)
{
	int x = 1;

	while (av[x] != NULL)
	{
		printf("Args %d is %s\n", x, av[x]);
		x++;
	}
	return (0);
}
