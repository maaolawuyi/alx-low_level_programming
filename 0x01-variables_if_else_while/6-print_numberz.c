#include <stdio.h>
/**
 * main - print all single digit number of base
 * 10 starting from 0, follow by newline
 * Return: ALways 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar (n);
	putchar ('\n');
	return (0);
}
