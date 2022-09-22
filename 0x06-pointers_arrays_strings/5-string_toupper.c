#include "main.h"
/**
 * string_toupper - a function that change lowercase to uppercase
 * @x: input string
 * Return: character pointing to converted string
 */
char *string_toupper(char *x)
{
	char *start = x;

	while (*x)
	{
		if (*x >= 'a' && *x <= 'z')
			*x -= 32;
		x++;
	}
	return (start);
}
