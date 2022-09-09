#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program entry point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');

	return (0);
}
