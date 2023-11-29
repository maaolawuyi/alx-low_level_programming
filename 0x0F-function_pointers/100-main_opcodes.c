#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int ac, char *av[])
{
	int b, i;
	char *arr;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(av[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
