#include "main.h"
/**
 * rot13 - a function that encode a string using rot13
 * @x: input string
 * Return: An encode string
 */
char *rot13(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		while ((x[i] >= 'a' && x[i] <= 'z') ||
				(x[i] >= 'A' && x[i] <= 'Z'))
		{
			if ((x[i] >= 'a' && x[i] <= 'm') ||
					(x[i] >= 'A' && x[i] <= 'M'))
				x[i] += 13;
			else
				x[i] -= 13;
			i++;
		}
		i++;
	}
	return (x);
}
