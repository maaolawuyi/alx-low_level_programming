#include <stdio.h>

/**
 * main - print alphabet in lowercase and then in uppercase
 * follow by a newline
 * Return: Always 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar ('\n');
	return (0);
}
