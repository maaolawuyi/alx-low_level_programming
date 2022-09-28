#include "main.h"
/**
 * _strlen_recursion - a function that return the lenght of string
 * @s: input string
 * Return: return the lent of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
		return (0);
	}
}
