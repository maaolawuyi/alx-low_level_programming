#include <stdio.h>
#include <stdlib.h>
/**
 * main -  a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s", argv[0]);
	printf("\n");

	return (0);
}
