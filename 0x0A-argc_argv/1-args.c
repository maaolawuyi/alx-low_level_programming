#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @ac: arguments counter
 * @av: arguments vector
 * Return: Always 0 (Success)
 */
int main(int ac, char *av[] __attribute__((unused)))
{
	printf("%d\n", ac - 1);
	return (0);
}
