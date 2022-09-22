#include "main.h"
/**
 * cap_string - a function that capitalise all world of a string
 * @x: input string
 * Return: a pointer to the string
 */
char *cap_string(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (i == 0 && (x[i]) >= 'a' && x[i + 1] <= 'z')
			x[i] -= 32;
		if (check_seperators(x[i]) && (x[i + 1] >= 'a' && x[i + 1] <= 'z'))
			x[i + 1] -= 32;
		i++;
	}
	return (x);
}


