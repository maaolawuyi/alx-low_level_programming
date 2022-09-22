#include "main.h"
/**
 * leet - a function that encode a string into 1337
 * @x: input string
 * Return: An encode string
 */
char *leet(char *x)
{
	int i = 0;
	int j;
	char sub[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (x[i])
	{
		for (j = 0; j < 10; j++)
			if (x[i] == str[j])
				x[i] = sub[j];

		i++;
	}
	return (x);
}
