#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x 10 in lowercase 
 * follow by newline
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char ch;

	while (i <= 10)
	{
		ch =  'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
