#include "main.h"

/**
 * _strlen - a function that return the lenght of a strings.
 * @s: An input string
 * Return: Nothing.
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
