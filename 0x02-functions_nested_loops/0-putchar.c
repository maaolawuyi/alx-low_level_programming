#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *main -  program that prints _putchar, followed by a new line
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char str[8] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)

	_putchar(str[i]);

	_putchar("\n");

	return (0);
}
