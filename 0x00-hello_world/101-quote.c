#include <stdio.h>
#include <unistd.h>
/**
 * main - print exactly "and that piece of art is useful"
 * - Dora korpar, 2015-10-19
 * follow by a newline, to the standard error
 * Retuen: 0 Always
 */ 
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
