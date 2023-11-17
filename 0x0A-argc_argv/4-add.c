#include <stdio.h>
#include "main.h"

/**
 * main - adds two positive number
 * @ac: arguments counter
 * @av: arguents vector
 * Return: 0 (Success), or 1 (Success)
 */

int main(int ac, char *av[])
{
	int sum, num, i, j, k;

	sum = 0;

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			if (av[i][j] > '9' || av[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < ac; k++)
	{
		num = atoi(av[k]);
		if (num >= 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
