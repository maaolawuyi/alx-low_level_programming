#include "main.h"
/**
 * more_numbers - Function that print 10 times the numer from 0 to 14
 * follow by new line.
 * Return: Always 0
 */

void more_numbers(void)
{
	int i, j = 0;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
