#include <stdio.h>
/**
 * main - print alphabet in lowercase
 * follow by newline
 * Return: Always 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}
