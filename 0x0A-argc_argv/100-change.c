#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @ac: arguments counter
 * @av: arguments vector
 * Return: 0 (Success), 1 (Error)
 */
int main(int ac, char *av[])
{
	int num, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(av[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}

	printf("%d\n", result);
	return (0);
}
