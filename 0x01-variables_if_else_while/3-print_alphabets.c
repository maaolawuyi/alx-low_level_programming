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
	char upplow;

	for (upplow = 'a'; upplow <= 'z'; upplow++)
		putchar(upplow);
	for (upplow = 'A'; upplow <= 'Z'; upplow++)
		putchar(upplow);
	putchar('\n');

	return (0);
}
