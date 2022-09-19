#include "main.h"
/**
 * rev_string - a function that reverse a string
 * @s: input string
 * Return: Nothing
 */

void rev_string(char *s)
{
	char *len = s;

	while (*len)
		len++;
	len -= 1;

	while (len)
	{
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
