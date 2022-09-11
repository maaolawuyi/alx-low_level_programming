#include <stdio.h>
#include <stdlib.h>

/**
 * main - Progra entry point
 *
 * Return:Always 1 (Success)
 */

int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\n - Dora korpar, 2015-10-19\n", 59);
	return (1);
}
