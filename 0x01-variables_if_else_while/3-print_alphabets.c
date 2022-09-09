#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Program Entry point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char upper;

	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');

	return (0);
}
