#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char *av[])
{
	int arg1, arg2, result;
	char o;
	int (*func)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(av[1]);
	arg2 = atoi(av[3]);

	func = get_op_func(av[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	o = *av[2];

	if ((o == '/' || o == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(arg1, arg2);

	printf("%d\n", result);

	return (0);
}
