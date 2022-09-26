#include "main.h"
/**
 * _strchr - a function that locate a character in a string
 * @s: an input string to search in
 * @c: input character to locate into string s
 * Return: return pointer to c position
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
