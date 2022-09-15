#include "main.h"
/**
 * print_numbers - Function that print number from 0-9
 * follow by  a new line
 * Return: Always 0
 */
void print_numbers(void)
{
	char i = '0';

	for (i = '0'; <= '9'; i++)
	{
		_putchar(i);

		_putchar('\n');
	}

}
