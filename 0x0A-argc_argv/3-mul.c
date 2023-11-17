#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @ac: arguments counter
 * @av: arguments vector
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int ac, char *av[])
{
	int result, num1, num2;

	if (ac < 3 || ac > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(av[1]);
	num2 = atoi(av[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
