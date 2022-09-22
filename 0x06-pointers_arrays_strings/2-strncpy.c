#include "main.h"
/**
 * _strncpy - a function that copy a string
 * @dest: input string
 * @src: input string
 * @n: input string
 * Return: A poiner to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int strlen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		strlen++;
		src++;
	}
	strlen++;

	if (n > strlen)
		n = strlen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
