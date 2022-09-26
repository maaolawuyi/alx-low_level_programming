#include "main.h"
#include <stdio.h>
/**
 * _strstr - a function that locates a substring.
 * @haystack: an input string to search in
 * @needle: an input string to locate in a haystack
 * Return: a pointer to the begining of located substring
 * ot NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *str1 = needle, *str2 = haystack;

	while (*haystack)
	{
		needle = str1;
		str2 = haystack;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = str2 + 1;
	}
	return (NULL);
}
