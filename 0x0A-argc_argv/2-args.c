#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @ac: arguments counter
 * @av: arguments vector
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char *av[])
{
	int i;

	for (i = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}

	return (0);
}
